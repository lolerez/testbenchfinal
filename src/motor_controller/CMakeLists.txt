cmake_minimum_required(VERSION 3.8)
project(motor_controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

# Serial library setup
set(SERIAL_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/serial/include)
set(SERIAL_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/serial/src)

# Check if the directories exist
if(NOT EXISTS ${SERIAL_INCLUDE_DIR})
  message(FATAL_ERROR "Serial include directory not found at: ${SERIAL_INCLUDE_DIR}")
endif()

# Add serial library source files (with correct paths)
set(SERIAL_SOURCES
  ${SERIAL_SRC_DIR}/serial.cc
  ${SERIAL_SRC_DIR}/impl/unix.cc
  ${SERIAL_SRC_DIR}/impl/list_ports/list_ports_linux.cc
)

# Create the serial library
add_library(serial STATIC ${SERIAL_SOURCES})
target_include_directories(serial PUBLIC 
  ${SERIAL_INCLUDE_DIR}
  ${SERIAL_INCLUDE_DIR}/serial  # Add this to find impl headers
)

# Custom message generation
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Dccommand.msg"
  "msg/StepperCommand.msg"
  "msg/UnitreeCommand.msg"
  DEPENDENCIES std_msgs
)

# Include directories
include_directories(
  include
  ${SERIAL_INCLUDE_DIR}
)

# Detect Raspberry Pi (ARM processor)
execute_process(
  COMMAND uname -m
  OUTPUT_VARIABLE CMAKE_SYSTEM_PROCESSOR
  OUTPUT_STRIP_TRAILING_WHITESPACE
)

if(CMAKE_SYSTEM_PROCESSOR MATCHES "armv7l|aarch64")
  message(STATUS "Detected Raspberry Pi environment. Enabling pigpio.")
  find_library(PIGPIO_LIBRARY pigpio REQUIRED)
  add_definitions(-DUSE_PIGPIO)
else()
  message(STATUS "Non-Raspberry Pi environment detected. Skipping pigpio.")
endif()

# Add executables
add_executable(motor_controller_node src/motor_controller_node.cpp)
add_executable(command_subscriber src/command_subscriber.cpp)
add_executable(gpio_subscriber_node 
  src/gpio_subscriber_node.cpp
  src/gpio_subscriber_main.cpp
)

# Add dependencies for executables
ament_target_dependencies(motor_controller_node 
  rclcpp 
  std_msgs
)

ament_target_dependencies(command_subscriber
  rclcpp
  std_msgs
)

ament_target_dependencies(gpio_subscriber_node
  rclcpp
  std_msgs
)

# Link against message types
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(motor_controller_node "${cpp_typesupport_target}")
target_link_libraries(command_subscriber "${cpp_typesupport_target}")
target_link_libraries(gpio_subscriber_node "${cpp_typesupport_target}")

# Link serial library to gpio_subscriber_node
target_link_libraries(gpio_subscriber_node serial)

# Link pigpio only if on Raspberry Pi
if(DEFINED PIGPIO_LIBRARY)
  target_link_libraries(gpio_subscriber_node ${PIGPIO_LIBRARY})
endif()

# Install executables and library
install(TARGETS
  motor_controller_node
  command_subscriber
  gpio_subscriber_node
  serial
  DESTINATION lib/${PROJECT_NAME}
)

# Install include directories
install(
  DIRECTORY include/
  DESTINATION include
)

# Linting
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_dependencies(rosidl_default_runtime)
ament_package()