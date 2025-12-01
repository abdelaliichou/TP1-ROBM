// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/rover_motors_cmd.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__TRAITS_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoverMotorsCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: front_left
  {
    out << "front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left, out);
    out << ", ";
  }

  // member: front_right
  {
    out << "front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right, out);
    out << ", ";
  }

  // member: rear_left
  {
    out << "rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left, out);
    out << ", ";
  }

  // member: rear_right
  {
    out << "rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoverMotorsCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: front_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_left: ";
    rosidl_generator_traits::value_to_yaml(msg.front_left, out);
    out << "\n";
  }

  // member: front_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_right: ";
    rosidl_generator_traits::value_to_yaml(msg.front_right, out);
    out << "\n";
  }

  // member: rear_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_left: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_left, out);
    out << "\n";
  }

  // member: rear_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rear_right: ";
    rosidl_generator_traits::value_to_yaml(msg.rear_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoverMotorsCmd & msg, bool use_flow_style = false)
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
  const robm_interfaces::msg::RoverMotorsCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  robm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robm_interfaces::msg::RoverMotorsCmd & msg)
{
  return robm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robm_interfaces::msg::RoverMotorsCmd>()
{
  return "robm_interfaces::msg::RoverMotorsCmd";
}

template<>
inline const char * name<robm_interfaces::msg::RoverMotorsCmd>()
{
  return "robm_interfaces/msg/RoverMotorsCmd";
}

template<>
struct has_fixed_size<robm_interfaces::msg::RoverMotorsCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robm_interfaces::msg::RoverMotorsCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robm_interfaces::msg::RoverMotorsCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__TRAITS_HPP_
