// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice
#ifndef MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "motor_controller/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "motor_controller/msg/detail/dccommand__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
bool cdr_serialize_motor_controller__msg__Dccommand(
  const motor_controller__msg__Dccommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
bool cdr_deserialize_motor_controller__msg__Dccommand(
  eprosima::fastcdr::Cdr &,
  motor_controller__msg__Dccommand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
size_t get_serialized_size_motor_controller__msg__Dccommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
size_t max_serialized_size_motor_controller__msg__Dccommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
bool cdr_serialize_key_motor_controller__msg__Dccommand(
  const motor_controller__msg__Dccommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
size_t get_serialized_size_key_motor_controller__msg__Dccommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
size_t max_serialized_size_key_motor_controller__msg__Dccommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_motor_controller
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, motor_controller, msg, Dccommand)();

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
