// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robm_interfaces:msg/Color.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/color.h"


#ifndef ROBM_INTERFACES__MSG__DETAIL__COLOR__STRUCT_H_
#define ROBM_INTERFACES__MSG__DETAIL__COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/Color in the package robm_interfaces.
typedef struct robm_interfaces__msg__Color
{
  /// timestamp is the time the illuminance was measured
  /// frame_id is the location and direction of the reading
  std_msgs__msg__Header header;
  float r;
  float g;
  float b;
  float lux;
} robm_interfaces__msg__Color;

// Struct for a sequence of robm_interfaces__msg__Color.
typedef struct robm_interfaces__msg__Color__Sequence
{
  robm_interfaces__msg__Color * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robm_interfaces__msg__Color__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__COLOR__STRUCT_H_
