// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/stepper_command.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__StepperCommand __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__StepperCommand __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StepperCommand_
{
  using Type = StepperCommand_<ContainerAllocator>;

  explicit StepperCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stepsl = 0l;
      this->stepr = 0l;
    }
  }

  explicit StepperCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stepsl = 0l;
      this->stepr = 0l;
    }
  }

  // field types and members
  using _stepsl_type =
    int32_t;
  _stepsl_type stepsl;
  using _stepr_type =
    int32_t;
  _stepr_type stepr;

  // setters for named parameter idiom
  Type & set__stepsl(
    const int32_t & _arg)
  {
    this->stepsl = _arg;
    return *this;
  }
  Type & set__stepr(
    const int32_t & _arg)
  {
    this->stepr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_controller::msg::StepperCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::StepperCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::StepperCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::StepperCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__StepperCommand
    std::shared_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__StepperCommand
    std::shared_ptr<motor_controller::msg::StepperCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StepperCommand_ & other) const
  {
    if (this->stepsl != other.stepsl) {
      return false;
    }
    if (this->stepr != other.stepr) {
      return false;
    }
    return true;
  }
  bool operator!=(const StepperCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StepperCommand_

// alias to use template instance with default allocator
using StepperCommand =
  motor_controller::msg::StepperCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__STRUCT_HPP_
