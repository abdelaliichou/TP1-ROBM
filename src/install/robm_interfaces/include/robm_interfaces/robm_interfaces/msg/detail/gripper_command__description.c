// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robm_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#include "robm_interfaces/msg/detail/gripper_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_type_hash_t *
robm_interfaces__msg__GripperCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x24, 0xc6, 0x38, 0x9b, 0xc9, 0x26, 0x56,
      0x5f, 0x3f, 0x30, 0x56, 0xfe, 0x3b, 0x13, 0xc1,
      0x22, 0x76, 0x67, 0x6a, 0xee, 0x84, 0x79, 0x0e,
      0xdb, 0x6a, 0xeb, 0xc8, 0xd8, 0x71, 0x93, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robm_interfaces__msg__GripperCommand__TYPE_NAME[] = "robm_interfaces/msg/GripperCommand";

// Define type names, field names, and default values
static char robm_interfaces__msg__GripperCommand__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field robm_interfaces__msg__GripperCommand__FIELDS[] = {
  {
    {robm_interfaces__msg__GripperCommand__FIELD_NAME__position, 8, 8},
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
robm_interfaces__msg__GripperCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robm_interfaces__msg__GripperCommand__TYPE_NAME, 34, 34},
      {robm_interfaces__msg__GripperCommand__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Control the opening of the robot gripper\n"
  "# The position value ranges from 0.0 (closed) to 1.0 (open)\n"
  "float32 position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robm_interfaces__msg__GripperCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robm_interfaces__msg__GripperCommand__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 120, 120},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robm_interfaces__msg__GripperCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robm_interfaces__msg__GripperCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
