// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robm_interfaces:msg/GripperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/gripper_command.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robm_interfaces/msg/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robm_interfaces
{

namespace msg
{

namespace builder
{

class Init_GripperCommand_position
{
public:
  Init_GripperCommand_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robm_interfaces::msg::GripperCommand position(::robm_interfaces::msg::GripperCommand::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robm_interfaces::msg::GripperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robm_interfaces::msg::GripperCommand>()
{
  return robm_interfaces::msg::builder::Init_GripperCommand_position();
}

}  // namespace robm_interfaces

#endif  // ROBM_INTERFACES__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
