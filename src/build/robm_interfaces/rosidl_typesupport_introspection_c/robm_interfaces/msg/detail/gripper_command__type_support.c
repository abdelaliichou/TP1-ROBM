// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robm_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robm_interfaces/msg/detail/gripper_command__rosidl_typesupport_introspection_c.h"
#include "robm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robm_interfaces/msg/detail/gripper_command__functions.h"
#include "robm_interfaces/msg/detail/gripper_command__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robm_interfaces__msg__GripperCommand__init(message_memory);
}

void robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_fini_function(void * message_memory)
{
  robm_interfaces__msg__GripperCommand__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robm_interfaces__msg__GripperCommand, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_members = {
  "robm_interfaces__msg",  // message namespace
  "GripperCommand",  // message name
  1,  // number of fields
  sizeof(robm_interfaces__msg__GripperCommand),
  false,  // has_any_key_member_
  robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_member_array,  // message members
  robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_type_support_handle = {
  0,
  &robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_members,
  get_message_typesupport_handle_function,
  &robm_interfaces__msg__GripperCommand__get_type_hash,
  &robm_interfaces__msg__GripperCommand__get_type_description,
  &robm_interfaces__msg__GripperCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robm_interfaces, msg, GripperCommand)() {
  if (!robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_type_support_handle.typesupport_identifier) {
    robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robm_interfaces__msg__GripperCommand__rosidl_typesupport_introspection_c__GripperCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
