// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robm_interfaces:msg/ServoCommand.idl
// generated code does not contain a copyright notice
#include "robm_interfaces/msg/detail/servo_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robm_interfaces__msg__ServoCommand__init(robm_interfaces__msg__ServoCommand * msg)
{
  if (!msg) {
    return false;
  }
  // angle
  return true;
}

void
robm_interfaces__msg__ServoCommand__fini(robm_interfaces__msg__ServoCommand * msg)
{
  if (!msg) {
    return;
  }
  // angle
}

bool
robm_interfaces__msg__ServoCommand__are_equal(const robm_interfaces__msg__ServoCommand * lhs, const robm_interfaces__msg__ServoCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  return true;
}

bool
robm_interfaces__msg__ServoCommand__copy(
  const robm_interfaces__msg__ServoCommand * input,
  robm_interfaces__msg__ServoCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // angle
  output->angle = input->angle;
  return true;
}

robm_interfaces__msg__ServoCommand *
robm_interfaces__msg__ServoCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robm_interfaces__msg__ServoCommand * msg = (robm_interfaces__msg__ServoCommand *)allocator.allocate(sizeof(robm_interfaces__msg__ServoCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robm_interfaces__msg__ServoCommand));
  bool success = robm_interfaces__msg__ServoCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robm_interfaces__msg__ServoCommand__destroy(robm_interfaces__msg__ServoCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robm_interfaces__msg__ServoCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robm_interfaces__msg__ServoCommand__Sequence__init(robm_interfaces__msg__ServoCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robm_interfaces__msg__ServoCommand * data = NULL;

  if (size) {
    data = (robm_interfaces__msg__ServoCommand *)allocator.zero_allocate(size, sizeof(robm_interfaces__msg__ServoCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robm_interfaces__msg__ServoCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robm_interfaces__msg__ServoCommand__fini(&data[i - 1]);
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
robm_interfaces__msg__ServoCommand__Sequence__fini(robm_interfaces__msg__ServoCommand__Sequence * array)
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
      robm_interfaces__msg__ServoCommand__fini(&array->data[i]);
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

robm_interfaces__msg__ServoCommand__Sequence *
robm_interfaces__msg__ServoCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robm_interfaces__msg__ServoCommand__Sequence * array = (robm_interfaces__msg__ServoCommand__Sequence *)allocator.allocate(sizeof(robm_interfaces__msg__ServoCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robm_interfaces__msg__ServoCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robm_interfaces__msg__ServoCommand__Sequence__destroy(robm_interfaces__msg__ServoCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robm_interfaces__msg__ServoCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robm_interfaces__msg__ServoCommand__Sequence__are_equal(const robm_interfaces__msg__ServoCommand__Sequence * lhs, const robm_interfaces__msg__ServoCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robm_interfaces__msg__ServoCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robm_interfaces__msg__ServoCommand__Sequence__copy(
  const robm_interfaces__msg__ServoCommand__Sequence * input,
  robm_interfaces__msg__ServoCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robm_interfaces__msg__ServoCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robm_interfaces__msg__ServoCommand * data =
      (robm_interfaces__msg__ServoCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robm_interfaces__msg__ServoCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robm_interfaces__msg__ServoCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robm_interfaces__msg__ServoCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
