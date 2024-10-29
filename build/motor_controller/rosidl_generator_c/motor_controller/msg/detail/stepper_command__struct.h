// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/stepper_command.h"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/StepperCommand in the package motor_controller.
typedef struct motor_controller__msg__StepperCommand
{
  /// Steps to move (range -254 to 254)
  int32_t stepsl;
  /// steps to move (Renge -245 to 245)
  int32_t stepr;
} motor_controller__msg__StepperCommand;

// Struct for a sequence of motor_controller__msg__StepperCommand.
typedef struct motor_controller__msg__StepperCommand__Sequence
{
  motor_controller__msg__StepperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__StepperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__STRUCT_H_
