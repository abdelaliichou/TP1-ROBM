// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robm_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/gripper_command.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robm_interfaces/msg/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robm_interfaces::msg::GripperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  robm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robm_interfaces::msg::GripperCommand & msg)
{
  return robm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robm_interfaces::msg::GripperCommand>()
{
  return "robm_interfaces::msg::GripperCommand";
}

template<>
inline const char * name<robm_interfaces::msg::GripperCommand>()
{
  return "robm_interfaces/msg/GripperCommand";
}

template<>
struct has_fixed_size<robm_interfaces::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robm_interfaces::msg::GripperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robm_interfaces::msg::GripperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
