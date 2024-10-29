// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/dccommand.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__STRUCT_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_controller__msg__Dccommand __attribute__((deprecated))
#else
# define DEPRECATED__motor_controller__msg__Dccommand __declspec(deprecated)
#endif

namespace motor_controller
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dccommand_
{
  using Type = Dccommand_<ContainerAllocator>;

  explicit Dccommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motorbl = 0l;
      this->motorbr = 0l;
      this->motorfl = 0l;
      this->motorfr = 0l;
    }
  }

  explicit Dccommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motorbl = 0l;
      this->motorbr = 0l;
      this->motorfl = 0l;
      this->motorfr = 0l;
    }
  }

  // field types and members
  using _motorbl_type =
    int32_t;
  _motorbl_type motorbl;
  using _motorbr_type =
    int32_t;
  _motorbr_type motorbr;
  using _motorfl_type =
    int32_t;
  _motorfl_type motorfl;
  using _motorfr_type =
    int32_t;
  _motorfr_type motorfr;

  // setters for named parameter idiom
  Type & set__motorbl(
    const int32_t & _arg)
  {
    this->motorbl = _arg;
    return *this;
  }
  Type & set__motorbr(
    const int32_t & _arg)
  {
    this->motorbr = _arg;
    return *this;
  }
  Type & set__motorfl(
    const int32_t & _arg)
  {
    this->motorfl = _arg;
    return *this;
  }
  Type & set__motorfr(
    const int32_t & _arg)
  {
    this->motorfr = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_controller::msg::Dccommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_controller::msg::Dccommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_controller::msg::Dccommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_controller::msg::Dccommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::Dccommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::Dccommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_controller::msg::Dccommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_controller::msg::Dccommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_controller::msg::Dccommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_controller::msg::Dccommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_controller__msg__Dccommand
    std::shared_ptr<motor_controller::msg::Dccommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_controller__msg__Dccommand
    std::shared_ptr<motor_controller::msg::Dccommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dccommand_ & other) const
  {
    if (this->motorbl != other.motorbl) {
      return false;
    }
    if (this->motorbr != other.motorbr) {
      return false;
    }
    if (this->motorfl != other.motorfl) {
      return false;
    }
    if (this->motorfr != other.motorfr) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dccommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dccommand_

// alias to use template instance with default allocator
using Dccommand =
  motor_controller::msg::Dccommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__STRUCT_HPP_
