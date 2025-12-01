// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/rover_motors_cmd.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__BUILDER_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robm_interfaces
{

namespace msg
{

namespace builder
{

class Init_RoverMotorsCmd_rear_right
{
public:
  explicit Init_RoverMotorsCmd_rear_right(::robm_interfaces::msg::RoverMotorsCmd & msg)
  : msg_(msg)
  {}
  ::robm_interfaces::msg::RoverMotorsCmd rear_right(::robm_interfaces::msg::RoverMotorsCmd::_rear_right_type arg)
  {
    msg_.rear_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robm_interfaces::msg::RoverMotorsCmd msg_;
};

class Init_RoverMotorsCmd_rear_left
{
public:
  explicit Init_RoverMotorsCmd_rear_left(::robm_interfaces::msg::RoverMotorsCmd & msg)
  : msg_(msg)
  {}
  Init_RoverMotorsCmd_rear_right rear_left(::robm_interfaces::msg::RoverMotorsCmd::_rear_left_type arg)
  {
    msg_.rear_left = std::move(arg);
    return Init_RoverMotorsCmd_rear_right(msg_);
  }

private:
  ::robm_interfaces::msg::RoverMotorsCmd msg_;
};

class Init_RoverMotorsCmd_front_right
{
public:
  explicit Init_RoverMotorsCmd_front_right(::robm_interfaces::msg::RoverMotorsCmd & msg)
  : msg_(msg)
  {}
  Init_RoverMotorsCmd_rear_left front_right(::robm_interfaces::msg::RoverMotorsCmd::_front_right_type arg)
  {
    msg_.front_right = std::move(arg);
    return Init_RoverMotorsCmd_rear_left(msg_);
  }

private:
  ::robm_interfaces::msg::RoverMotorsCmd msg_;
};

class Init_RoverMotorsCmd_front_left
{
public:
  Init_RoverMotorsCmd_front_left()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoverMotorsCmd_front_right front_left(::robm_interfaces::msg::RoverMotorsCmd::_front_left_type arg)
  {
    msg_.front_left = std::move(arg);
    return Init_RoverMotorsCmd_front_right(msg_);
  }

private:
  ::robm_interfaces::msg::RoverMotorsCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robm_interfaces::msg::RoverMotorsCmd>()
{
  return robm_interfaces::msg::builder::Init_RoverMotorsCmd_front_left();
}

}  // namespace robm_interfaces

#endif  // ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__BUILDER_HPP_
