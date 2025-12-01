// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice
#ifndef ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
bool cdr_serialize_robm_interfaces__msg__RoverMotorsCmd(
  const robm_interfaces__msg__RoverMotorsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
bool cdr_deserialize_robm_interfaces__msg__RoverMotorsCmd(
  eprosima::fastcdr::Cdr &,
  robm_interfaces__msg__RoverMotorsCmd * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t get_serialized_size_robm_interfaces__msg__RoverMotorsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t max_serialized_size_robm_interfaces__msg__RoverMotorsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
bool cdr_serialize_key_robm_interfaces__msg__RoverMotorsCmd(
  const robm_interfaces__msg__RoverMotorsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t get_serialized_size_key_robm_interfaces__msg__RoverMotorsCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t max_serialized_size_key_robm_interfaces__msg__RoverMotorsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robm_interfaces, msg, RoverMotorsCmd)();

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
