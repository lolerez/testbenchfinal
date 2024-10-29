// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "motor_controller/msg/dccommand.hpp"


#ifndef MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__TRAITS_HPP_
#define MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_controller/msg/detail/dccommand__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_controller
{

namespace msg
{

inline void to_flow_style_yaml(
  const Dccommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: motorbl
  {
    out << "motorbl: ";
    rosidl_generator_traits::value_to_yaml(msg.motorbl, out);
    out << ", ";
  }

  // member: motorbr
  {
    out << "motorbr: ";
    rosidl_generator_traits::value_to_yaml(msg.motorbr, out);
    out << ", ";
  }

  // member: motorfl
  {
    out << "motorfl: ";
    rosidl_generator_traits::value_to_yaml(msg.motorfl, out);
    out << ", ";
  }

  // member: motorfr
  {
    out << "motorfr: ";
    rosidl_generator_traits::value_to_yaml(msg.motorfr, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dccommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motorbl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorbl: ";
    rosidl_generator_traits::value_to_yaml(msg.motorbl, out);
    out << "\n";
  }

  // member: motorbr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorbr: ";
    rosidl_generator_traits::value_to_yaml(msg.motorbr, out);
    out << "\n";
  }

  // member: motorfl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorfl: ";
    rosidl_generator_traits::value_to_yaml(msg.motorfl, out);
    out << "\n";
  }

  // member: motorfr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorfr: ";
    rosidl_generator_traits::value_to_yaml(msg.motorfr, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dccommand & msg, bool use_flow_style = false)
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
  const motor_controller::msg::Dccommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_controller::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_controller::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_controller::msg::Dccommand & msg)
{
  return motor_controller::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_controller::msg::Dccommand>()
{
  return "motor_controller::msg::Dccommand";
}

template<>
inline const char * name<motor_controller::msg::Dccommand>()
{
  return "motor_controller/msg/Dccommand";
}

template<>
struct has_fixed_size<motor_controller::msg::Dccommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_controller::msg::Dccommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_controller::msg::Dccommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_CONTROLLER__MSG__DETAIL__DCCOMMAND__TRAITS_HPP_
