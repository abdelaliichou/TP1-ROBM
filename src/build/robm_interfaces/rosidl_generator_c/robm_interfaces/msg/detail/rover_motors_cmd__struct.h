// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/rover_motors_cmd.h"


#ifndef ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__STRUCT_H_
#define ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RoverMotorsCmd in the package robm_interfaces.
/**
  * Control of the four motors of the M5Stack RoverC omnidirectional platform
  * Values are from -1.0 (full reverse) to 1.0 (full forward)
 */
typedef struct robm_interfaces__msg__RoverMotorsCmd
{
  float front_left;
  float front_right;
  float rear_left;
  float rear_right;
} robm_interfaces__msg__RoverMotorsCmd;

// Struct for a sequence of robm_interfaces__msg__RoverMotorsCmd.
typedef struct robm_interfaces__msg__RoverMotorsCmd__Sequence
{
  robm_interfaces__msg__RoverMotorsCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robm_interfaces__msg__RoverMotorsCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__STRUCT_H_
