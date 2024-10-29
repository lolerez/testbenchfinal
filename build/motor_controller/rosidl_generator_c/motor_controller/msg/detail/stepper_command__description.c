// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice

#include "motor_controller/msg/detail/stepper_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_type_hash_t *
motor_controller__msg__StepperCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0x9b, 0xac, 0xa8, 0x7a, 0xe5, 0x5b, 0x6d,
      0x86, 0x09, 0x46, 0xb9, 0x0a, 0x6d, 0x77, 0x1e,
      0x62, 0x0a, 0x7c, 0xec, 0x5e, 0x7a, 0x05, 0xf6,
      0x81, 0x08, 0x86, 0xce, 0x90, 0xf1, 0xe0, 0x09,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char motor_controller__msg__StepperCommand__TYPE_NAME[] = "motor_controller/msg/StepperCommand";

// Define type names, field names, and default values
static char motor_controller__msg__StepperCommand__FIELD_NAME__stepsl[] = "stepsl";
static char motor_controller__msg__StepperCommand__FIELD_NAME__stepr[] = "stepr";

static rosidl_runtime_c__type_description__Field motor_controller__msg__StepperCommand__FIELDS[] = {
  {
    {motor_controller__msg__StepperCommand__FIELD_NAME__stepsl, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__StepperCommand__FIELD_NAME__stepr, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_controller__msg__StepperCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_controller__msg__StepperCommand__TYPE_NAME, 35, 35},
      {motor_controller__msg__StepperCommand__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 stepsl    # Steps to move (range -254 to 254)\n"
  "int32 stepr  # steps to move (Renge -245 to 245)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motor_controller__msg__StepperCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_controller__msg__StepperCommand__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 101, 101},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_controller__msg__StepperCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_controller__msg__StepperCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
