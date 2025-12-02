// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robm_interfaces:msg/Color.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/color.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__COLOR__BUILDER_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robm_interfaces/msg/detail/color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Color_lux
{
public:
  explicit Init_Color_lux(::robm_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  ::robm_interfaces::msg::Color lux(::robm_interfaces::msg::Color::_lux_type arg)
  {
    msg_.lux = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robm_interfaces::msg::Color msg_;
};

class Init_Color_b
{
public:
  explicit Init_Color_b(::robm_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_lux b(::robm_interfaces::msg::Color::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Color_lux(msg_);
  }

private:
  ::robm_interfaces::msg::Color msg_;
};

class Init_Color_g
{
public:
  explicit Init_Color_g(::robm_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_b g(::robm_interfaces::msg::Color::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Color_b(msg_);
  }

private:
  ::robm_interfaces::msg::Color msg_;
};

class Init_Color_r
{
public:
  explicit Init_Color_r(::robm_interfaces::msg::Color & msg)
  : msg_(msg)
  {}
  Init_Color_g r(::robm_interfaces::msg::Color::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Color_g(msg_);
  }

private:
  ::robm_interfaces::msg::Color msg_;
};

class Init_Color_header
{
public:
  Init_Color_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Color_r header(::robm_interfaces::msg::Color::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Color_r(msg_);
  }

private:
  ::robm_interfaces::msg::Color msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robm_interfaces::msg::Color>()
{
  return robm_interfaces::msg::builder::Init_Color_header();
}

}  // namespace robm_interfaces

#endif  // ROBM_INTERFACES__MSG__DETAIL__COLOR__BUILDER_HPP_
