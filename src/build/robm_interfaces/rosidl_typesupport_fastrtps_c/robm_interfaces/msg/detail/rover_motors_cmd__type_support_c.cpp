// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice
#include "robm_interfaces/msg/detail/rover_motors_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RoverMotorsCmd__ros_msg_type = robm_interfaces__msg__RoverMotorsCmd;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
bool cdr_serialize_robm_interfaces__msg__RoverMotorsCmd(
  const robm_interfaces__msg__RoverMotorsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: front_left
  {
    cdr << ros_message->front_left;
  }

  // Field name: front_right
  {
    cdr << ros_message->front_right;
  }

  // Field name: rear_left
  {
    cdr << ros_message->rear_left;
  }

  // Field name: rear_right
  {
    cdr << ros_message->rear_right;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
bool cdr_deserialize_robm_interfaces__msg__RoverMotorsCmd(
  eprosima::fastcdr::Cdr & cdr,
  robm_interfaces__msg__RoverMotorsCmd * ros_message)
{
  // Field name: front_left
  {
    cdr >> ros_message->front_left;
  }

  // Field name: front_right
  {
    cdr >> ros_message->front_right;
  }

  // Field name: rear_left
  {
    cdr >> ros_message->rear_left;
  }

  // Field name: rear_right
  {
    cdr >> ros_message->rear_right;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t get_serialized_size_robm_interfaces__msg__RoverMotorsCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoverMotorsCmd__ros_msg_type * ros_message = static_cast<const _RoverMotorsCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: front_left
  {
    size_t item_size = sizeof(ros_message->front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: front_right
  {
    size_t item_size = sizeof(ros_message->front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rear_left
  {
    size_t item_size = sizeof(ros_message->rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rear_right
  {
    size_t item_size = sizeof(ros_message->rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t max_serialized_size_robm_interfaces__msg__RoverMotorsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rear_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rear_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robm_interfaces__msg__RoverMotorsCmd;
    is_plain =
      (
      offsetof(DataType, rear_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
bool cdr_serialize_key_robm_interfaces__msg__RoverMotorsCmd(
  const robm_interfaces__msg__RoverMotorsCmd * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: front_left
  {
    cdr << ros_message->front_left;
  }

  // Field name: front_right
  {
    cdr << ros_message->front_right;
  }

  // Field name: rear_left
  {
    cdr << ros_message->rear_left;
  }

  // Field name: rear_right
  {
    cdr << ros_message->rear_right;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t get_serialized_size_key_robm_interfaces__msg__RoverMotorsCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RoverMotorsCmd__ros_msg_type * ros_message = static_cast<const _RoverMotorsCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: front_left
  {
    size_t item_size = sizeof(ros_message->front_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: front_right
  {
    size_t item_size = sizeof(ros_message->front_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rear_left
  {
    size_t item_size = sizeof(ros_message->rear_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: rear_right
  {
    size_t item_size = sizeof(ros_message->rear_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robm_interfaces
size_t max_serialized_size_key_robm_interfaces__msg__RoverMotorsCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: front_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: front_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rear_left
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: rear_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robm_interfaces__msg__RoverMotorsCmd;
    is_plain =
      (
      offsetof(DataType, rear_right) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _RoverMotorsCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robm_interfaces__msg__RoverMotorsCmd * ros_message = static_cast<const robm_interfaces__msg__RoverMotorsCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robm_interfaces__msg__RoverMotorsCmd(ros_message, cdr);
}

static bool _RoverMotorsCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robm_interfaces__msg__RoverMotorsCmd * ros_message = static_cast<robm_interfaces__msg__RoverMotorsCmd *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robm_interfaces__msg__RoverMotorsCmd(cdr, ros_message);
}

static uint32_t _RoverMotorsCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robm_interfaces__msg__RoverMotorsCmd(
      untyped_ros_message, 0));
}

static size_t _RoverMotorsCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robm_interfaces__msg__RoverMotorsCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RoverMotorsCmd = {
  "robm_interfaces::msg",
  "RoverMotorsCmd",
  _RoverMotorsCmd__cdr_serialize,
  _RoverMotorsCmd__cdr_deserialize,
  _RoverMotorsCmd__get_serialized_size,
  _RoverMotorsCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _RoverMotorsCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RoverMotorsCmd,
  get_message_typesupport_handle_function,
  &robm_interfaces__msg__RoverMotorsCmd__get_type_hash,
  &robm_interfaces__msg__RoverMotorsCmd__get_type_description,
  &robm_interfaces__msg__RoverMotorsCmd__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robm_interfaces, msg, RoverMotorsCmd)() {
  return &_RoverMotorsCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
