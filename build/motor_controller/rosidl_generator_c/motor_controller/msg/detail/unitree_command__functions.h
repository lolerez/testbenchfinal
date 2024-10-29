// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motor_controller:msg/UnitreeCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/unitree_command.h"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__FUNCTIONS_H_
#define MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "motor_controller/msg/rosidl_generator_c__visibility_control.h"

#include "motor_controller/msg/detail/unitree_command__struct.h"

/// Initialize msg/UnitreeCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motor_controller__msg__UnitreeCommand
 * )) before or use
 * motor_controller__msg__UnitreeCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__UnitreeCommand__init(motor_controller__msg__UnitreeCommand * msg);

/// Finalize msg/UnitreeCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__UnitreeCommand__fini(motor_controller__msg__UnitreeCommand * msg);

/// Create msg/UnitreeCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motor_controller__msg__UnitreeCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
motor_controller__msg__UnitreeCommand *
motor_controller__msg__UnitreeCommand__create(void);

/// Destroy msg/UnitreeCommand message.
/**
 * It calls
 * motor_controller__msg__UnitreeCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__UnitreeCommand__destroy(motor_controller__msg__UnitreeCommand * msg);

/// Check for msg/UnitreeCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__UnitreeCommand__are_equal(const motor_controller__msg__UnitreeCommand * lhs, const motor_controller__msg__UnitreeCommand * rhs);

/// Copy a msg/UnitreeCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__UnitreeCommand__copy(
  const motor_controller__msg__UnitreeCommand * input,
  motor_controller__msg__UnitreeCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_type_hash_t *
motor_controller__msg__UnitreeCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_runtime_c__type_description__TypeDescription *
motor_controller__msg__UnitreeCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_runtime_c__type_description__TypeSource *
motor_controller__msg__UnitreeCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_controller__msg__UnitreeCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/UnitreeCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * motor_controller__msg__UnitreeCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__UnitreeCommand__Sequence__init(motor_controller__msg__UnitreeCommand__Sequence * array, size_t size);

/// Finalize array of msg/UnitreeCommand messages.
/**
 * It calls
 * motor_controller__msg__UnitreeCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__UnitreeCommand__Sequence__fini(motor_controller__msg__UnitreeCommand__Sequence * array);

/// Create array of msg/UnitreeCommand messages.
/**
 * It allocates the memory for the array and calls
 * motor_controller__msg__UnitreeCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
motor_controller__msg__UnitreeCommand__Sequence *
motor_controller__msg__UnitreeCommand__Sequence__create(size_t size);

/// Destroy array of msg/UnitreeCommand messages.
/**
 * It calls
 * motor_controller__msg__UnitreeCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
void
motor_controller__msg__UnitreeCommand__Sequence__destroy(motor_controller__msg__UnitreeCommand__Sequence * array);

/// Check for msg/UnitreeCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__UnitreeCommand__Sequence__are_equal(const motor_controller__msg__UnitreeCommand__Sequence * lhs, const motor_controller__msg__UnitreeCommand__Sequence * rhs);

/// Copy an array of msg/UnitreeCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_motor_controller
bool
motor_controller__msg__UnitreeCommand__Sequence__copy(
  const motor_controller__msg__UnitreeCommand__Sequence * input,
  motor_controller__msg__UnitreeCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__FUNCTIONS_H_
