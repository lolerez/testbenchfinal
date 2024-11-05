cmake_minimum_required(VERSION 3.8)
project(terratrek_robot)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Install config, description, launch, and worlds directories
install(
  DIRECTORY config description launch worlds
  DESTINATION share/${PROJECT_NAME}
)

# Install the Python executable with the correct permissions
install(
  PROGRAMS src/gpio_launch_subscriber.py  # The Python script
  DESTINATION lib/${PROJECT_NAME}         # Matches ROS 2’s convention for executables
)

# Generate custom messages
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Dccommand.msg"
  "msg/StepperCommand.msg"
  "msg/UnitreeCommand.msg"
)

ament_package()
