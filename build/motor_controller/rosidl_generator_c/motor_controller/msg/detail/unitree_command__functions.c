// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_controller:msg/UnitreeCommand.idl
// generated code does not contain a copyright notice
#include "motor_controller/msg/detail/unitree_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
motor_controller__msg__UnitreeCommand__init(motor_controller__msg__UnitreeCommand * msg)
{
  if (!msg) {
    return false;
  }
  // q
  // dq
  // tau
  // kp
  // kd
  return true;
}

void
motor_controller__msg__UnitreeCommand__fini(motor_controller__msg__UnitreeCommand * msg)
{
  if (!msg) {
    return;
  }
  // q
  // dq
  // tau
  // kp
  // kd
}

bool
motor_controller__msg__UnitreeCommand__are_equal(const motor_controller__msg__UnitreeCommand * lhs, const motor_controller__msg__UnitreeCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // dq
  if (lhs->dq != rhs->dq) {
    return false;
  }
  // tau
  if (lhs->tau != rhs->tau) {
    return false;
  }
  // kp
  if (lhs->kp != rhs->kp) {
    return false;
  }
  // kd
  if (lhs->kd != rhs->kd) {
    return false;
  }
  return true;
}

bool
motor_controller__msg__UnitreeCommand__copy(
  const motor_controller__msg__UnitreeCommand * input,
  motor_controller__msg__UnitreeCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // q
  output->q = input->q;
  // dq
  output->dq = input->dq;
  // tau
  output->tau = input->tau;
  // kp
  output->kp = input->kp;
  // kd
  output->kd = input->kd;
  return true;
}

motor_controller__msg__UnitreeCommand *
motor_controller__msg__UnitreeCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__UnitreeCommand * msg = (motor_controller__msg__UnitreeCommand *)allocator.allocate(sizeof(motor_controller__msg__UnitreeCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_controller__msg__UnitreeCommand));
  bool success = motor_controller__msg__UnitreeCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_controller__msg__UnitreeCommand__destroy(motor_controller__msg__UnitreeCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_controller__msg__UnitreeCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_controller__msg__UnitreeCommand__Sequence__init(motor_controller__msg__UnitreeCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__UnitreeCommand * data = NULL;

  if (size) {
    data = (motor_controller__msg__UnitreeCommand *)allocator.zero_allocate(size, sizeof(motor_controller__msg__UnitreeCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_controller__msg__UnitreeCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_controller__msg__UnitreeCommand__fini(&data[i - 1]);
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
motor_controller__msg__UnitreeCommand__Sequence__fini(motor_controller__msg__UnitreeCommand__Sequence * array)
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
      motor_controller__msg__UnitreeCommand__fini(&array->data[i]);
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

motor_controller__msg__UnitreeCommand__Sequence *
motor_controller__msg__UnitreeCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_controller__msg__UnitreeCommand__Sequence * array = (motor_controller__msg__UnitreeCommand__Sequence *)allocator.allocate(sizeof(motor_controller__msg__UnitreeCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_controller__msg__UnitreeCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_controller__msg__UnitreeCommand__Sequence__destroy(motor_controller__msg__UnitreeCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_controller__msg__UnitreeCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_controller__msg__UnitreeCommand__Sequence__are_equal(const motor_controller__msg__UnitreeCommand__Sequence * lhs, const motor_controller__msg__UnitreeCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_controller__msg__UnitreeCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_controller__msg__UnitreeCommand__Sequence__copy(
  const motor_controller__msg__UnitreeCommand__Sequence * input,
  motor_controller__msg__UnitreeCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_controller__msg__UnitreeCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_controller__msg__UnitreeCommand * data =
      (motor_controller__msg__UnitreeCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_controller__msg__UnitreeCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_controller__msg__UnitreeCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_controller__msg__UnitreeCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
