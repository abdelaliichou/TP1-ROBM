// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robm_interfaces:msg/ServoCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robm_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robm_interfaces/msg/detail/servo_command__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robm_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
cdr_serialize(
  const robm_interfaces::msg::ServoCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robm_interfaces::msg::ServoCommand & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
get_serialized_size(
  const robm_interfaces::msg::ServoCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
max_serialized_size_ServoCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
cdr_serialize_key(
  const robm_interfaces::msg::ServoCommand & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
get_serialized_size_key(
  const robm_interfaces::msg::ServoCommand & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
max_serialized_size_key_ServoCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robm_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robm_interfaces, msg, ServoCommand)();

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
