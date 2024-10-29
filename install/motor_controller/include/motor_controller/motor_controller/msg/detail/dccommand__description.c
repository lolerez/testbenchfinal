// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice

#include "motor_controller/msg/detail/dccommand__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_motor_controller
const rosidl_type_hash_t *
motor_controller__msg__Dccommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4c, 0x85, 0x9f, 0x33, 0x40, 0x2d, 0x2d, 0x1c,
      0x21, 0xa2, 0xc7, 0x95, 0xec, 0x3b, 0xca, 0x16,
      0x3d, 0x3a, 0xe0, 0x96, 0x16, 0xf1, 0x26, 0x22,
      0x5c, 0x5a, 0x76, 0xa0, 0x40, 0x50, 0x8e, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char motor_controller__msg__Dccommand__TYPE_NAME[] = "motor_controller/msg/Dccommand";

// Define type names, field names, and default values
static char motor_controller__msg__Dccommand__FIELD_NAME__motorbl[] = "motorbl";
static char motor_controller__msg__Dccommand__FIELD_NAME__motorbr[] = "motorbr";
static char motor_controller__msg__Dccommand__FIELD_NAME__motorfl[] = "motorfl";
static char motor_controller__msg__Dccommand__FIELD_NAME__motorfr[] = "motorfr";

static rosidl_runtime_c__type_description__Field motor_controller__msg__Dccommand__FIELDS[] = {
  {
    {motor_controller__msg__Dccommand__FIELD_NAME__motorbl, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__Dccommand__FIELD_NAME__motorbr, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__Dccommand__FIELD_NAME__motorfl, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {motor_controller__msg__Dccommand__FIELD_NAME__motorfr, 7, 7},
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
motor_controller__msg__Dccommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {motor_controller__msg__Dccommand__TYPE_NAME, 30, 30},
      {motor_controller__msg__Dccommand__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 motorbl  # PWM for back left motor\n"
  "int32 motorbr  # PWM for back right motor\n"
  "int32 motorfl  # PWM for front left motor\n"
  "int32 motorfr  # PWM for front right motor";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
motor_controller__msg__Dccommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {motor_controller__msg__Dccommand__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 168, 168},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
motor_controller__msg__Dccommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *motor_controller__msg__Dccommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
