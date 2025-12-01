// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__type_support.h"
#include "robm_interfaces/msg/detail/rover_motors_cmd__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _RoverMotorsCmd_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RoverMotorsCmd_type_support_ids_t;

static const _RoverMotorsCmd_type_support_ids_t _RoverMotorsCmd_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _RoverMotorsCmd_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RoverMotorsCmd_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RoverMotorsCmd_type_support_symbol_names_t _RoverMotorsCmd_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robm_interfaces, msg, RoverMotorsCmd)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robm_interfaces, msg, RoverMotorsCmd)),
  }
};

typedef struct _RoverMotorsCmd_type_support_data_t
{
  void * data[2];
} _RoverMotorsCmd_type_support_data_t;

static _RoverMotorsCmd_type_support_data_t _RoverMotorsCmd_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RoverMotorsCmd_message_typesupport_map = {
  2,
  "robm_interfaces",
  &_RoverMotorsCmd_message_typesupport_ids.typesupport_identifier[0],
  &_RoverMotorsCmd_message_typesupport_symbol_names.symbol_name[0],
  &_RoverMotorsCmd_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RoverMotorsCmd_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RoverMotorsCmd_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robm_interfaces__msg__RoverMotorsCmd__get_type_hash,
  &robm_interfaces__msg__RoverMotorsCmd__get_type_description,
  &robm_interfaces__msg__RoverMotorsCmd__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace robm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robm_interfaces, msg, RoverMotorsCmd)() {
  return &::robm_interfaces::msg::rosidl_typesupport_c::RoverMotorsCmd_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
