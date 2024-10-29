// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/dccommand.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_controller/msg/detail/dccommand__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_Dccommand_motorfr
{
public:
  explicit Init_Dccommand_motorfr(::motor_controller::msg::Dccommand & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::Dccommand motorfr(::motor_controller::msg::Dccommand::_motorfr_type arg)
  {
    msg_.motorfr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::Dccommand msg_;
};

class Init_Dccommand_motorfl
{
public:
  explicit Init_Dccommand_motorfl(::motor_controller::msg::Dccommand & msg)
  : msg_(msg)
  {}
  Init_Dccommand_motorfr motorfl(::motor_controller::msg::Dccommand::_motorfl_type arg)
  {
    msg_.motorfl = std::move(arg);
    return Init_Dccommand_motorfr(msg_);
  }

private:
  ::motor_controller::msg::Dccommand msg_;
};

class Init_Dccommand_motorbr
{
public:
  explicit Init_Dccommand_motorbr(::motor_controller::msg::Dccommand & msg)
  : msg_(msg)
  {}
  Init_Dccommand_motorfl motorbr(::motor_controller::msg::Dccommand::_motorbr_type arg)
  {
    msg_.motorbr = std::move(arg);
    return Init_Dccommand_motorfl(msg_);
  }

private:
  ::motor_controller::msg::Dccommand msg_;
};

class Init_Dccommand_motorbl
{
public:
  Init_Dccommand_motorbl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dccommand_motorbr motorbl(::motor_controller::msg::Dccommand::_motorbl_type arg)
  {
    msg_.motorbl = std::move(arg);
    return Init_Dccommand_motorbr(msg_);
  }

private:
  ::motor_controller::msg::Dccommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::Dccommand>()
{
  return motor_controller::msg::builder::Init_Dccommand_motorbl();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__BUILDER_HPP_
