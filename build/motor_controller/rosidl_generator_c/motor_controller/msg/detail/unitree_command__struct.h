// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_controller:msg/UnitreeCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/unitree_command.h"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__STRUCT_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UnitreeCommand in the package motor_controller.
typedef struct motor_controller__msg__UnitreeCommand
{
  /// Position
  float q;
  /// Speed
  float dq;
  /// Feedforward torque
  float tau;
  /// Position stiffness
  float kp;
  /// Velocity stiffness (damping)
  float kd;
} motor_controller__msg__UnitreeCommand;

// Struct for a sequence of motor_controller__msg__UnitreeCommand.
typedef struct motor_controller__msg__UnitreeCommand__Sequence
{
  motor_controller__msg__UnitreeCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_controller__msg__UnitreeCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__STRUCT_H_
