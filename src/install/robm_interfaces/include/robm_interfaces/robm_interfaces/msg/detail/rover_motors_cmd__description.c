// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

#include "robm_interfaces/msg/detail/rover_motors_cmd__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_type_hash_t *
robm_interfaces__msg__RoverMotorsCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe5, 0xbd, 0x83, 0xed, 0xb8, 0xf5, 0x08, 0x2e,
      0xb1, 0xd0, 0x1c, 0x0c, 0xe8, 0x49, 0x11, 0xa3,
      0x68, 0x11, 0xd1, 0x22, 0x53, 0xff, 0x96, 0x82,
      0xee, 0x5d, 0x70, 0xa9, 0xc1, 0x3c, 0xa9, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robm_interfaces__msg__RoverMotorsCmd__TYPE_NAME[] = "robm_interfaces/msg/RoverMotorsCmd";

// Define type names, field names, and default values
static char robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__front_left[] = "front_left";
static char robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__front_right[] = "front_right";
static char robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__rear_left[] = "rear_left";
static char robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__rear_right[] = "rear_right";

static rosidl_runtime_c__type_description__Field robm_interfaces__msg__RoverMotorsCmd__FIELDS[] = {
  {
    {robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__front_left, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__front_right, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__rear_left, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robm_interfaces__msg__RoverMotorsCmd__FIELD_NAME__rear_right, 10, 10},
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
robm_interfaces__msg__RoverMotorsCmd__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robm_interfaces__msg__RoverMotorsCmd__TYPE_NAME, 34, 34},
      {robm_interfaces__msg__RoverMotorsCmd__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Control of the four motors of the M5Stack RoverC omnidirectional platform\n"
  "# Values are from -1.0 (full reverse) to 1.0 (full forward)\n"
  "float32 front_left\n"
  "float32 front_right\n"
  "float32 rear_left\n"
  "float32 rear_right";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robm_interfaces__msg__RoverMotorsCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robm_interfaces__msg__RoverMotorsCmd__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 212, 212},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robm_interfaces__msg__RoverMotorsCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robm_interfaces__msg__RoverMotorsCmd__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
