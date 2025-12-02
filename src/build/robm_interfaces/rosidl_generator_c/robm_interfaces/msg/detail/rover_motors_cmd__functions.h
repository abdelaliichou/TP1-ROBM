// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from robm_interfaces:msg/RoverMotorsCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robm_interfaces/msg/rover_motors_cmd.h"


#ifndef ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__FUNCTIONS_H_
#define ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "robm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "robm_interfaces/msg/detail/rover_motors_cmd__struct.h"

/// Initialize msg/RoverMotorsCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * robm_interfaces__msg__RoverMotorsCmd
 * )) before or use
 * robm_interfaces__msg__RoverMotorsCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
bool
robm_interfaces__msg__RoverMotorsCmd__init(robm_interfaces__msg__RoverMotorsCmd * msg);

/// Finalize msg/RoverMotorsCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
void
robm_interfaces__msg__RoverMotorsCmd__fini(robm_interfaces__msg__RoverMotorsCmd * msg);

/// Create msg/RoverMotorsCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * robm_interfaces__msg__RoverMotorsCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
robm_interfaces__msg__RoverMotorsCmd *
robm_interfaces__msg__RoverMotorsCmd__create(void);

/// Destroy msg/RoverMotorsCmd message.
/**
 * It calls
 * robm_interfaces__msg__RoverMotorsCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
void
robm_interfaces__msg__RoverMotorsCmd__destroy(robm_interfaces__msg__RoverMotorsCmd * msg);

/// Check for msg/RoverMotorsCmd message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
bool
robm_interfaces__msg__RoverMotorsCmd__are_equal(const robm_interfaces__msg__RoverMotorsCmd * lhs, const robm_interfaces__msg__RoverMotorsCmd * rhs);

/// Copy a msg/RoverMotorsCmd message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
bool
robm_interfaces__msg__RoverMotorsCmd__copy(
  const robm_interfaces__msg__RoverMotorsCmd * input,
  robm_interfaces__msg__RoverMotorsCmd * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_type_hash_t *
robm_interfaces__msg__RoverMotorsCmd__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
robm_interfaces__msg__RoverMotorsCmd__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
robm_interfaces__msg__RoverMotorsCmd__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
robm_interfaces__msg__RoverMotorsCmd__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/RoverMotorsCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * robm_interfaces__msg__RoverMotorsCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
bool
robm_interfaces__msg__RoverMotorsCmd__Sequence__init(robm_interfaces__msg__RoverMotorsCmd__Sequence * array, size_t size);

/// Finalize array of msg/RoverMotorsCmd messages.
/**
 * It calls
 * robm_interfaces__msg__RoverMotorsCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
void
robm_interfaces__msg__RoverMotorsCmd__Sequence__fini(robm_interfaces__msg__RoverMotorsCmd__Sequence * array);

/// Create array of msg/RoverMotorsCmd messages.
/**
 * It allocates the memory for the array and calls
 * robm_interfaces__msg__RoverMotorsCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
robm_interfaces__msg__RoverMotorsCmd__Sequence *
robm_interfaces__msg__RoverMotorsCmd__Sequence__create(size_t size);

/// Destroy array of msg/RoverMotorsCmd messages.
/**
 * It calls
 * robm_interfaces__msg__RoverMotorsCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
void
robm_interfaces__msg__RoverMotorsCmd__Sequence__destroy(robm_interfaces__msg__RoverMotorsCmd__Sequence * array);

/// Check for msg/RoverMotorsCmd message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
bool
robm_interfaces__msg__RoverMotorsCmd__Sequence__are_equal(const robm_interfaces__msg__RoverMotorsCmd__Sequence * lhs, const robm_interfaces__msg__RoverMotorsCmd__Sequence * rhs);

/// Copy an array of msg/RoverMotorsCmd messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_robm_interfaces
bool
robm_interfaces__msg__RoverMotorsCmd__Sequence__copy(
  const robm_interfaces__msg__RoverMotorsCmd__Sequence * input,
  robm_interfaces__msg__RoverMotorsCmd__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROBM_INTERFACES__MSG__DETAIL__ROVER_MOTORS_CMD__FUNCTIONS_H_
