// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robm_interfaces:msg/ServoCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/servo_command.h"


#ifndef ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_
#define ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ServoCommand in the package robm_interfaces.
/**
  * Control the position of the servomotor
  * Value is in radians, from -pi/2 (looking right) to pi/2 (looking left). Middle position is at 0.0
 */
typedef struct robm_interfaces__msg__ServoCommand
{
  float angle;
} robm_interfaces__msg__ServoCommand;

// Struct for a sequence of robm_interfaces__msg__ServoCommand.
typedef struct robm_interfaces__msg__ServoCommand__Sequence
{
  robm_interfaces__msg__ServoCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robm_interfaces__msg__ServoCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__STRUCT_H_
