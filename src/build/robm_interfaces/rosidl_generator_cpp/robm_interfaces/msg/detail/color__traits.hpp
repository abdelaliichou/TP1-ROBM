// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robm_interfaces:msg/Color.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/color.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__COLOR__TRAITS_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__COLOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robm_interfaces/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace robm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Color & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << ", ";
  }

  // member: lux
  {
    out << "lux: ";
    rosidl_generator_traits::value_to_yaml(msg.lux, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Color & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: lux
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lux: ";
    rosidl_generator_traits::value_to_yaml(msg.lux, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Color & msg, bool use_flow_style = false)
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
  const robm_interfaces::msg::Color & msg,
  std::ostream & out, size_t indentation = 0)
{
  robm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robm_interfaces::msg::Color & msg)
{
  return robm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robm_interfaces::msg::Color>()
{
  return "robm_interfaces::msg::Color";
}

template<>
inline const char * name<robm_interfaces::msg::Color>()
{
  return "robm_interfaces/msg/Color";
}

template<>
struct has_fixed_size<robm_interfaces::msg::Color>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<robm_interfaces::msg::Color>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<robm_interfaces::msg::Color>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBM_INTERFACES__MSG__DETAIL__COLOR__TRAITS_HPP_
