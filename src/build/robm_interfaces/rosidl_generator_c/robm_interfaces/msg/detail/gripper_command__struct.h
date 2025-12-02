// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robm_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/gripper_command.h"


#ifndef ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/GripperCommand in the package robm_interfaces.
/**
  * Control the opening of the robot gripper
  * The position value ranges from 0.0 (closed) to 1.0 (open)
 */
typedef struct robm_interfaces__msg__GripperCommand
{
  float position;
} robm_interfaces__msg__GripperCommand;

// Struct for a sequence of robm_interfaces__msg__GripperCommand.
typedef struct robm_interfaces__msg__GripperCommand__Sequence
{
  robm_interfaces__msg__GripperCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robm_interfaces__msg__GripperCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__STRUCT_H_
