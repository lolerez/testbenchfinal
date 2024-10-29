// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "motor_controller/msg/detail/stepper_command__functions.h"
#include "motor_controller/msg/detail/stepper_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace motor_controller
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StepperCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) motor_controller::msg::StepperCommand(_init);
}

void StepperCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<motor_controller::msg::StepperCommand *>(message_memory);
  typed_message->~StepperCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StepperCommand_message_member_array[2] = {
  {
    "stepsl",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller::msg::StepperCommand, stepsl),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stepr",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_controller::msg::StepperCommand, stepr),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StepperCommand_message_members = {
  "motor_controller::msg",  // message namespace
  "StepperCommand",  // message name
  2,  // number of fields
  sizeof(motor_controller::msg::StepperCommand),
  false,  // has_any_key_member_
  StepperCommand_message_member_array,  // message members
  StepperCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  StepperCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StepperCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StepperCommand_message_members,
  get_message_typesupport_handle_function,
  &motor_controller__msg__StepperCommand__get_type_hash,
  &motor_controller__msg__StepperCommand__get_type_description,
  &motor_controller__msg__StepperCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace motor_controller


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_controller::msg::StepperCommand>()
{
  return &::motor_controller::msg::rosidl_typesupport_introspection_cpp::StepperCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, motor_controller, msg, StepperCommand)() {
  return &::motor_controller::msg::rosidl_typesupport_introspection_cpp::StepperCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
