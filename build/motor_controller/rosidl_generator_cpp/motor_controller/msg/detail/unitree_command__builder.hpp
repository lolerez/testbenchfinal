// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_controller:msg/UnitreeCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/unitree_command.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__BUILDER_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_controller/msg/detail/unitree_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_controller
{

namespace msg
{

namespace builder
{

class Init_UnitreeCommand_kd
{
public:
  explicit Init_UnitreeCommand_kd(::motor_controller::msg::UnitreeCommand & msg)
  : msg_(msg)
  {}
  ::motor_controller::msg::UnitreeCommand kd(::motor_controller::msg::UnitreeCommand::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_controller::msg::UnitreeCommand msg_;
};

class Init_UnitreeCommand_kp
{
public:
  explicit Init_UnitreeCommand_kp(::motor_controller::msg::UnitreeCommand & msg)
  : msg_(msg)
  {}
  Init_UnitreeCommand_kd kp(::motor_controller::msg::UnitreeCommand::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_UnitreeCommand_kd(msg_);
  }

private:
  ::motor_controller::msg::UnitreeCommand msg_;
};

class Init_UnitreeCommand_tau
{
public:
  explicit Init_UnitreeCommand_tau(::motor_controller::msg::UnitreeCommand & msg)
  : msg_(msg)
  {}
  Init_UnitreeCommand_kp tau(::motor_controller::msg::UnitreeCommand::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_UnitreeCommand_kp(msg_);
  }

private:
  ::motor_controller::msg::UnitreeCommand msg_;
};

class Init_UnitreeCommand_dq
{
public:
  explicit Init_UnitreeCommand_dq(::motor_controller::msg::UnitreeCommand & msg)
  : msg_(msg)
  {}
  Init_UnitreeCommand_tau dq(::motor_controller::msg::UnitreeCommand::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_UnitreeCommand_tau(msg_);
  }

private:
  ::motor_controller::msg::UnitreeCommand msg_;
};

class Init_UnitreeCommand_q
{
public:
  Init_UnitreeCommand_q()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UnitreeCommand_dq q(::motor_controller::msg::UnitreeCommand::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_UnitreeCommand_dq(msg_);
  }

private:
  ::motor_controller::msg::UnitreeCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_controller::msg::UnitreeCommand>()
{
  return motor_controller::msg::builder::Init_UnitreeCommand_q();
}

}  // namespace motor_controller

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__UNITREE_COMMAND__BUILDER_HPP_
