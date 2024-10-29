// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_controller:msg/Dccommand.idl
// generated code does not contain a copyright notice
#include "motor_controller/msg/detail/dccommand__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
motor_controller__msg__Dccommand__init(motor_controller__msg__Dccommand * msg)
{
  if (!msg) {
    return false;
  }
  // motorbl
  // motorbr
  // motorfl
  // motorfr
  return true;
}

void
motor_controller__msg__Dccommand__fini(motor_controller__msg__Dccommand * msg)
{
  if (!msg) {
    return;
  }
  // motorbl
  // motorbr
  // motorfl
  // motorfr
}

bool
motor_controller__msg__Dccommand__are_equal(const motor_controller__msg__Dccommand * lhs, const motor_controller__msg__Dccommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motorbl
  if (lhs->motorbl != rhs->motorbl) {
    return false;
  }
  // motorbr
  if (lhs->motorbr != rhs->motorbr) {
    return false;
  }
  // motorfl
  if (lhs->motorfl != rhs->motorfl) {
    return false;
  }
  // motorfr
  if (lhs->motorfr != rhs->motorfr) {
    return false;
  }
  return true;
}

bool
motor_controller__msg__Dccommand__copy(
  const motor_controller__msg__Dccommand * input,
  motor_controller__msg__Dccommand * output)
{
  if (!input || !output) {
    return false;
  }
  // motorbl
  output->motorbl = input->motorbl;
  // motorbr
  output->motorbr = input->motorbr;
  // motorfl
  output->motorfl = input->motorfl;
  // motorfr
  output->motorfr = input->motorfr;
  return true;
}

motor_controller__msg__Dccommand *
motor_controller__msg__Dccommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__Dccommand * msg = (motor_controller__msg__Dccommand *)allocator.allocate(sizeof(motor_controller__msg__Dccommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_controller__msg__Dccommand));
  bool success = motor_controller__msg__Dccommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_controller__msg__Dccommand__destroy(motor_controller__msg__Dccommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_controller__msg__Dccommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_controller__msg__Dccommand__Sequence__init(motor_controller__msg__Dccommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__Dccommand * data = NULL;

  if (size) {
    data = (motor_controller__msg__Dccommand *)allocator.zero_allocate(size, sizeof(motor_controller__msg__Dccommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_controller__msg__Dccommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_controller__msg__Dccommand__fini(&data[i - 1]);
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
motor_controller__msg__Dccommand__Sequence__fini(motor_controller__msg__Dccommand__Sequence * array)
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
      motor_controller__msg__Dccommand__fini(&array->data[i]);
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

motor_controller__msg__Dccommand__Sequence *
motor_controller__msg__Dccommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__Dccommand__Sequence * array = (motor_controller__msg__Dccommand__Sequence *)allocator.allocate(sizeof(motor_controller__msg__Dccommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_controller__msg__Dccommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_controller__msg__Dccommand__Sequence__destroy(motor_controller__msg__Dccommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_controller__msg__Dccommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_controller__msg__Dccommand__Sequence__are_equal(const motor_controller__msg__Dccommand__Sequence * lhs, const motor_controller__msg__Dccommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_controller__msg__Dccommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_controller__msg__Dccommand__Sequence__copy(
  const motor_controller__msg__Dccommand__Sequence * input,
  motor_controller__msg__Dccommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_controller__msg__Dccommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_controller__msg__Dccommand * data =
      (motor_controller__msg__Dccommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_controller__msg__Dccommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_controller__msg__Dccommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_controller__msg__Dccommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
