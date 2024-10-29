// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_controller:msg/StepperCommand.idl
// generated code does not contain a copyright notice
#include "motor_controller/msg/detail/stepper_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
motor_controller__msg__StepperCommand__init(motor_controller__msg__StepperCommand * msg)
{
  if (!msg) {
    return false;
  }
  // stepsl
  // stepr
  return true;
}

void
motor_controller__msg__StepperCommand__fini(motor_controller__msg__StepperCommand * msg)
{
  if (!msg) {
    return;
  }
  // stepsl
  // stepr
}

bool
motor_controller__msg__StepperCommand__are_equal(const motor_controller__msg__StepperCommand * lhs, const motor_controller__msg__StepperCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stepsl
  if (lhs->stepsl != rhs->stepsl) {
    return false;
  }
  // stepr
  if (lhs->stepr != rhs->stepr) {
    return false;
  }
  return true;
}

bool
motor_controller__msg__StepperCommand__copy(
  const motor_controller__msg__StepperCommand * input,
  motor_controller__msg__StepperCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // stepsl
  output->stepsl = input->stepsl;
  // stepr
  output->stepr = input->stepr;
  return true;
}

motor_controller__msg__StepperCommand *
motor_controller__msg__StepperCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__StepperCommand * msg = (motor_controller__msg__StepperCommand *)allocator.allocate(sizeof(motor_controller__msg__StepperCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_controller__msg__StepperCommand));
  bool success = motor_controller__msg__StepperCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_controller__msg__StepperCommand__destroy(motor_controller__msg__StepperCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_controller__msg__StepperCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_controller__msg__StepperCommand__Sequence__init(motor_controller__msg__StepperCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__StepperCommand * data = NULL;

  if (size) {
    data = (motor_controller__msg__StepperCommand *)allocator.zero_allocate(size, sizeof(motor_controller__msg__StepperCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_controller__msg__StepperCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_controller__msg__StepperCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_controller__msg__StepperCommand__Sequence__fini(motor_controller__msg__StepperCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_controller__msg__StepperCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_controller__msg__StepperCommand__Sequence *
motor_controller__msg__StepperCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__StepperCommand__Sequence * array = (motor_controller__msg__StepperCommand__Sequence *)allocator.allocate(sizeof(motor_controller__msg__StepperCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_controller__msg__StepperCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_controller__msg__StepperCommand__Sequence__destroy(motor_controller__msg__StepperCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_controller__msg__StepperCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_controller__msg__StepperCommand__Sequence__are_equal(const motor_controller__msg__StepperCommand__Sequence * lhs, const motor_controller__msg__StepperCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_controller__msg__StepperCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_controller__msg__StepperCommand__Sequence__copy(
  const motor_controller__msg__StepperCommand__Sequence * input,
  motor_controller__msg__StepperCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_controller__msg__StepperCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_controller__msg__StepperCommand * data =
      (motor_controller__msg__StepperCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_controller__msg__StepperCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_controller__msg__StepperCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_controller__msg__StepperCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
