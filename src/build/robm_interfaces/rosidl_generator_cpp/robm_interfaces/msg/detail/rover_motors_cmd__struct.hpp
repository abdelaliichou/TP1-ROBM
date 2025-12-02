// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/rover_motors_cmd.hpp"


#ifndef ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__STRUCT_HPP_
#define ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robm_interfaces__msg__RoverMotorsCmd __attribute__((deprecated))
#else
# define DEPRECATED__robm_interfaces__msg__RoverMotorsCmd __declspec(deprecated)
#endif

namespace robm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoverMotorsCmd_
{
  using Type = RoverMotorsCmd_<ContainerAllocator>;

  explicit RoverMotorsCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0f;
      this->front_right = 0.0f;
      this->rear_left = 0.0f;
      this->rear_right = 0.0f;
    }
  }

  explicit RoverMotorsCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left = 0.0f;
      this->front_right = 0.0f;
      this->rear_left = 0.0f;
      this->rear_right = 0.0f;
    }
  }

  // field types and members
  using _front_left_type =
    float;
  _front_left_type front_left;
  using _front_right_type =
    float;
  _front_right_type front_right;
  using _rear_left_type =
    float;
  _rear_left_type rear_left;
  using _rear_right_type =
    float;
  _rear_right_type rear_right;

  // setters for named parameter idiom
  Type & set__front_left(
    const float & _arg)
  {
    this->front_left = _arg;
    return *this;
  }
  Type & set__front_right(
    const float & _arg)
  {
    this->front_right = _arg;
    return *this;
  }
  Type & set__rear_left(
    const float & _arg)
  {
    this->rear_left = _arg;
    return *this;
  }
  Type & set__rear_right(
    const float & _arg)
  {
    this->rear_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robm_interfaces__msg__RoverMotorsCmd
    std::shared_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robm_interfaces__msg__RoverMotorsCmd
    std::shared_ptr<robm_interfaces::msg::RoverMotorsCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoverMotorsCmd_ & other) const
  {
    if (this->front_left != other.front_left) {
      return false;
    }
    if (this->front_right != other.front_right) {
      return false;
    }
    if (this->rear_left != other.rear_left) {
      return false;
    }
    if (this->rear_right != other.rear_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoverMotorsCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoverMotorsCmd_

// alias to use template instance with default allocator
using RoverMotorsCmd =
  robm_interfaces::msg::RoverMotorsCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robm_interfaces

#endif  // ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__STRUCT_HPP_
