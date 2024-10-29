// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motor_controller:msg/UnitreeCommand.idl
// generated code does not contain a copyright notice

#include "motor_controller/msg/detail/unitree_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_type_hash_t *
motor_controller__msg__UnitreeCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0x43, 0xbf, 0x5e, 0x8f, 0xbe, 0x28, 0x08,
      0x9c, 0x3e, 0x7f, 0x1c, 0x6d, 0xcc, 0x02, 0xde,
      0x35, 0x6b, 0x2a, 0x40, 0xf0, 0x38, 0x2d, 0x2e,
      0x8d, 0xb4, 0xb9, 0xc6, 0x01, 0xf5, 0x31, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char motor_controller__msg__UnitreeCommand__TYPE_NAME[] = "motor_controller/msg/UnitreeCommand";

// Define type names, field names, and default values
static char motor_controller__msg__UnitreeCommand__FIELD_NAME__q[] = "q";
static char motor_controller__msg__UnitreeCommand__FIELD_NAME__dq[] = "dq";
static char motor_controller__msg__UnitreeCommand__FIELD_NAME__tau[] = "tau";
static char motor_controller__msg__UnitreeCommand__FIELD_NAME__kp[] = "kp";
static char motor_controller__msg__UnitreeCommand__FIELD_NAME__kd[] = "kd";

static rosidl_runtime_c__type_description__Field motor_controller__msg__UnitreeCommand__FIELDS[] = {
  {
    {motor_controller__msg__UnitreeCommand__FIELD_NAME__q, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__UnitreeCommand__FIELD_NAME__dq, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__UnitreeCommand__FIELD_NAME__tau, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__UnitreeCommand__FIELD_NAME__kp, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__UnitreeCommand__FIELD_NAME__kd, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
motor_controller__msg__UnitreeCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_controller__msg__UnitreeCommand__TYPE_NAME, 35, 35},
      {motor_controller__msg__UnitreeCommand__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 q     # Position\n"
  "float32 dq    # Speed\n"
  "float32 tau   # Feedforward torque\n"
  "float32 kp    # Position stiffness\n"
  "float32 kd    # Velocity stiffness (damping)";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motor_controller__msg__UnitreeCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_controller__msg__UnitreeCommand__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 162, 162},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_controller__msg__UnitreeCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_controller__msg__UnitreeCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
