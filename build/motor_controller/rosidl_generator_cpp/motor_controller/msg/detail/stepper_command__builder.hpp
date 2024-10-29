// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/stepper_command.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_controller/msg/detail/stepper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_StepperCommand_stepr
{
public:
  explicit Init_StepperCommand_stepr(::motor_controller::msg::StepperCommand & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::StepperCommand stepr(::motor_controller::msg::StepperCommand::_stepr_type arg)
  {
    msg_.stepr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::StepperCommand msg_;
};

class Init_StepperCommand_stepsl
{
public:
  Init_StepperCommand_stepsl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StepperCommand_stepr stepsl(::motor_controller::msg::StepperCommand::_stepsl_type arg)
  {
    msg_.stepsl = std::move(arg);
    return Init_StepperCommand_stepr(msg_);
  }

private:
  ::motor_controller::msg::StepperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::StepperCommand>()
{
  return motor_controller::msg::builder::Init_StepperCommand_stepsl();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__BUILDER_HPP_
