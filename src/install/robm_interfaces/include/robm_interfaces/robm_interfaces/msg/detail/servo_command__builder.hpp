// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robm_interfaces:msg/ServoCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/servo_command.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robm_interfaces/msg/detail/servo_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ServoCommand_angle
{
public:
  Init_ServoCommand_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robm_interfaces::msg::ServoCommand angle(::robm_interfaces::msg::ServoCommand::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robm_interfaces::msg::ServoCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robm_interfaces::msg::ServoCommand>()
{
  return robm_interfaces::msg::builder::Init_ServoCommand_angle();
}

}  // namespace robm_interfaces

#endif  // ROBM_INTERFACES__MSG__DETAIL__SERVO_COMMAND__BUILDER_HPP_
