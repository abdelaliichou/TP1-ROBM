// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robm_interfaces:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#include "robm_interfaces/msg/detail/servo_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_type_hash_t *
robm_interfaces__msg__ServoCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x84, 0x4f, 0xeb, 0x98, 0x98, 0x11, 0x09, 0x76,
      0x02, 0xca, 0x9c, 0x31, 0x71, 0xd4, 0xcc, 0x20,
      0x0e, 0xfc, 0xf0, 0x9d, 0xc4, 0xab, 0x05, 0xaf,
      0x3d, 0xca, 0x72, 0x5d, 0xe9, 0x3d, 0xb3, 0xdc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robm_interfaces__msg__ServoCommand__TYPE_NAME[] = "robm_interfaces/msg/ServoCommand";

// Define type names, field names, and default values
static char robm_interfaces__msg__ServoCommand__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field robm_interfaces__msg__ServoCommand__FIELDS[] = {
  {
    {robm_interfaces__msg__ServoCommand__FIELD_NAME__angle, 5, 5},
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
robm_interfaces__msg__ServoCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robm_interfaces__msg__ServoCommand__TYPE_NAME, 32, 32},
      {robm_interfaces__msg__ServoCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Control the position of the servomotor\n"
  "# Value is in radians, from -pi/2 (looking right) to pi/2 (looking left). Middle position is at 0.0\n"
  "float32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robm_interfaces__msg__ServoCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robm_interfaces__msg__ServoCommand__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 155, 155},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robm_interfaces__msg__ServoCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robm_interfaces__msg__ServoCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
