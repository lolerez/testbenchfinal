// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/stepper_command.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__TRAITS_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_controller/msg/detail/stepper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const StepperCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: stepsl
  {
    out << "stepsl: ";
    rosidl_generator_traits::value_to_yaml(msg.stepsl, out);
    out << ", ";
  }

  // member: stepr
  {
    out << "stepr: ";
    rosidl_generator_traits::value_to_yaml(msg.stepr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StepperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stepsl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stepsl: ";
    rosidl_generator_traits::value_to_yaml(msg.stepsl, out);
    out << "\n";
  }

  // member: stepr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stepr: ";
    rosidl_generator_traits::value_to_yaml(msg.stepr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StepperCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motor_controller

namespace rosidl_generator_traits
{

[[deprecated("use motor_controller::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_controller::msg::StepperCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_controller::msg::StepperCommand & msg)
{
  return motor_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_controller::msg::StepperCommand>()
{
  return "motor_controller::msg::StepperCommand";
}

template<>
inline const char * name<motor_controller::msg::StepperCommand>()
{
  return "motor_controller/msg/StepperCommand";
}

template<>
struct has_fixed_size<motor_controller::msg::StepperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_controller::msg::StepperCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_controller::msg::StepperCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__STEPPER_COMMAND__TRAITS_HPP_
