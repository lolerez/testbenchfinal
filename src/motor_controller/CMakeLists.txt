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
find_package(serial REQUIRED)

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
)

include_directories(
  ${PROJECT_SOURCE_DIR}/libs/serial/include
)

# Add the serial library as a static library target
add_library(serial STATIC
  ${PROJECT_SOURCE_DIR}/libs/serial/src/serial.cpp
  ${PROJECT_SOURCE_DIR}/libs/serial/src/impl/unix.cpp
)

# Link the serial library to your target
target_link_libraries(your_target_name
  serial
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
  add_definitions(-DUSE_PIGPIO)  # Define USE_PIGPIO for conditional compilation
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

# Add dependencies
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

# Link pigpio only if on Raspberry Pi
if(DEFINED PIGPIO_LIBRARY)
  target_link_libraries(gpio_subscriber_node ${PIGPIO_LIBRARY})
endif()


# Install executables
install(TARGETS
  motor_controller_node
  command_subscriber
  gpio_subscriber_node
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