// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "motor_controller/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "motor_controller/msg/detail/dccommand__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace motor_controller
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
cdr_serialize(
  const motor_controller::msg::Dccommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  motor_controller::msg::Dccommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
get_serialized_size(
  const motor_controller::msg::Dccommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
max_serialized_size_Dccommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
cdr_serialize_key(
  const motor_controller::msg::Dccommand & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
get_serialized_size_key(
  const motor_controller::msg::Dccommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
max_serialized_size_key_Dccommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace motor_controller

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_controller
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_controller, msg, Dccommand)();

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
