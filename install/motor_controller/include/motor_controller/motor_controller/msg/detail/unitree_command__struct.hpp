// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/UnitreeCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/unitree_command.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__UnitreeCommand __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__UnitreeCommand __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UnitreeCommand_
{
  using Type = UnitreeCommand_<ContainerAllocator>;

  explicit UnitreeCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q = 0.0f;
      this->dq = 0.0f;
      this->tau = 0.0f;
      this->kp = 0.0f;
      this->kd = 0.0f;
    }
  }

  explicit UnitreeCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->q = 0.0f;
      this->dq = 0.0f;
      this->tau = 0.0f;
      this->kp = 0.0f;
      this->kd = 0.0f;
    }
  }

  // field types and members
  using _q_type =
    float;
  _q_type q;
  using _dq_type =
    float;
  _dq_type dq;
  using _tau_type =
    float;
  _tau_type tau;
  using _kp_type =
    float;
  _kp_type kp;
  using _kd_type =
    float;
  _kd_type kd;

  // setters for named parameter idiom
  Type & set__q(
    const float & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__dq(
    const float & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__tau(
    const float & _arg)
  {
    this->tau = _arg;
    return *this;
  }
  Type & set__kp(
    const float & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const float & _arg)
  {
    this->kd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_controller::msg::UnitreeCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::UnitreeCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::UnitreeCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::UnitreeCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__UnitreeCommand
    std::shared_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__UnitreeCommand
    std::shared_ptr<motor_controller::msg::UnitreeCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UnitreeCommand_ & other) const
  {
    if (this->q != other.q) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->tau != other.tau) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    return true;
  }
  bool operator!=(const UnitreeCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UnitreeCommand_

// alias to use template instance with default allocator
using UnitreeCommand =
  motor_controller::msg::UnitreeCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__STRUCT_HPP_
