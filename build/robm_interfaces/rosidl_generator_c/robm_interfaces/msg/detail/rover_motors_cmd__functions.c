// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice
#include "robm_interfaces/msg/detail/rover_motors_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
robm_interfaces__msg__RoverMotorsCmd__init(robm_interfaces__msg__RoverMotorsCmd * msg)
{
  if (!msg) {
    return false;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
  return true;
}

void
robm_interfaces__msg__RoverMotorsCmd__fini(robm_interfaces__msg__RoverMotorsCmd * msg)
{
  if (!msg) {
    return;
  }
  // front_left
  // front_right
  // rear_left
  // rear_right
}

bool
robm_interfaces__msg__RoverMotorsCmd__are_equal(const robm_interfaces__msg__RoverMotorsCmd * lhs, const robm_interfaces__msg__RoverMotorsCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front_left
  if (lhs->front_left != rhs->front_left) {
    return false;
  }
  // front_right
  if (lhs->front_right != rhs->front_right) {
    return false;
  }
  // rear_left
  if (lhs->rear_left != rhs->rear_left) {
    return false;
  }
  // rear_right
  if (lhs->rear_right != rhs->rear_right) {
    return false;
  }
  return true;
}

bool
robm_interfaces__msg__RoverMotorsCmd__copy(
  const robm_interfaces__msg__RoverMotorsCmd * input,
  robm_interfaces__msg__RoverMotorsCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // front_left
  output->front_left = input->front_left;
  // front_right
  output->front_right = input->front_right;
  // rear_left
  output->rear_left = input->rear_left;
  // rear_right
  output->rear_right = input->rear_right;
  return true;
}

robm_interfaces__msg__RoverMotorsCmd *
robm_interfaces__msg__RoverMotorsCmd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robm_interfaces__msg__RoverMotorsCmd * msg = (robm_interfaces__msg__RoverMotorsCmd *)allocator.allocate(sizeof(robm_interfaces__msg__RoverMotorsCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robm_interfaces__msg__RoverMotorsCmd));
  bool success = robm_interfaces__msg__RoverMotorsCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robm_interfaces__msg__RoverMotorsCmd__destroy(robm_interfaces__msg__RoverMotorsCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robm_interfaces__msg__RoverMotorsCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robm_interfaces__msg__RoverMotorsCmd__Sequence__init(robm_interfaces__msg__RoverMotorsCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robm_interfaces__msg__RoverMotorsCmd * data = NULL;

  if (size) {
    data = (robm_interfaces__msg__RoverMotorsCmd *)allocator.zero_allocate(size, sizeof(robm_interfaces__msg__RoverMotorsCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robm_interfaces__msg__RoverMotorsCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robm_interfaces__msg__RoverMotorsCmd__fini(&data[i - 1]);
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
robm_interfaces__msg__RoverMotorsCmd__Sequence__fini(robm_interfaces__msg__RoverMotorsCmd__Sequence * array)
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
      robm_interfaces__msg__RoverMotorsCmd__fini(&array->data[i]);
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

robm_interfaces__msg__RoverMotorsCmd__Sequence *
robm_interfaces__msg__RoverMotorsCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robm_interfaces__msg__RoverMotorsCmd__Sequence * array = (robm_interfaces__msg__RoverMotorsCmd__Sequence *)allocator.allocate(sizeof(robm_interfaces__msg__RoverMotorsCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robm_interfaces__msg__RoverMotorsCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robm_interfaces__msg__RoverMotorsCmd__Sequence__destroy(robm_interfaces__msg__RoverMotorsCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robm_interfaces__msg__RoverMotorsCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robm_interfaces__msg__RoverMotorsCmd__Sequence__are_equal(const robm_interfaces__msg__RoverMotorsCmd__Sequence * lhs, const robm_interfaces__msg__RoverMotorsCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robm_interfaces__msg__RoverMotorsCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robm_interfaces__msg__RoverMotorsCmd__Sequence__copy(
  const robm_interfaces__msg__RoverMotorsCmd__Sequence * input,
  robm_interfaces__msg__RoverMotorsCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robm_interfaces__msg__RoverMotorsCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robm_interfaces__msg__RoverMotorsCmd * data =
      (robm_interfaces__msg__RoverMotorsCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robm_interfaces__msg__RoverMotorsCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robm_interfaces__msg__RoverMotorsCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robm_interfaces__msg__RoverMotorsCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
