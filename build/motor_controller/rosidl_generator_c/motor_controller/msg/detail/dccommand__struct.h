// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/dccommand.h"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Dccommand in the package motor_controller.
typedef struct motor_controller__msg__Dccommand
{
  /// PWM for back left motor
  int32_t motorbl;
  /// PWM for back right motor
  int32_t motorbr;
  /// PWM for front left motor
  int32_t motorfl;
  /// PWM for front right motor
  int32_t motorfr;
} motor_controller__msg__Dccommand;

// Struct for a sequence of motor_controller__msg__Dccommand.
typedef struct motor_controller__msg__Dccommand__Sequence
{
  motor_controller__msg__Dccommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__Dccommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__STRUCT_H_
