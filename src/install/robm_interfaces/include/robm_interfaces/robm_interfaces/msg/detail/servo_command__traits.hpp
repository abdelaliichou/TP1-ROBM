// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robm_interfaces:msg/ServoCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/servo_command.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__TRAITS_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robm_interfaces/msg/detail/servo_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ServoCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoCommand & msg, bool use_flow_style = false)
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
  const robm_interfaces::msg::ServoCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  robm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robm_interfaces::msg::ServoCommand & msg)
{
  return robm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robm_interfaces::msg::ServoCommand>()
{
  return "robm_interfaces::msg::ServoCommand";
}

template<>
inline const char * name<robm_interfaces::msg::ServoCommand>()
{
  return "robm_interfaces/msg/ServoCommand";
}

template<>
struct has_fixed_size<robm_interfaces::msg::ServoCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robm_interfaces::msg::ServoCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robm_interfaces::msg::ServoCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__TRAITS_HPP_
