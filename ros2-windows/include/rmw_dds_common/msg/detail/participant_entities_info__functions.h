// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmw_dds_common:msg\ParticipantEntitiesInfo.idl
// generated code does not contain a copyright notice

#ifndef RMW_DDS_COMMON__MSG__DETAIL__PARTICIPANT_ENTITIES_INFO__FUNCTIONS_H_
#define RMW_DDS_COMMON__MSG__DETAIL__PARTICIPANT_ENTITIES_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmw_dds_common/msg/rosidl_generator_c__visibility_control.h"

#include "rmw_dds_common/msg/detail/participant_entities_info__struct.h"

/// Initialize msg/ParticipantEntitiesInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmw_dds_common__msg__ParticipantEntitiesInfo
 * )) before or use
 * rmw_dds_common__msg__ParticipantEntitiesInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
bool
rmw_dds_common__msg__ParticipantEntitiesInfo__init(rmw_dds_common__msg__ParticipantEntitiesInfo * msg);

/// Finalize msg/ParticipantEntitiesInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__ParticipantEntitiesInfo__fini(rmw_dds_common__msg__ParticipantEntitiesInfo * msg);

/// Create msg/ParticipantEntitiesInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmw_dds_common__msg__ParticipantEntitiesInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
rmw_dds_common__msg__ParticipantEntitiesInfo *
rmw_dds_common__msg__ParticipantEntitiesInfo__create();

/// Destroy msg/ParticipantEntitiesInfo message.
/**
 * It calls
 * rmw_dds_common__msg__ParticipantEntitiesInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__ParticipantEntitiesInfo__destroy(rmw_dds_common__msg__ParticipantEntitiesInfo * msg);


/// Initialize array of msg/ParticipantEntitiesInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmw_dds_common__msg__ParticipantEntitiesInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
bool
rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence__init(rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence * array, size_t size);

/// Finalize array of msg/ParticipantEntitiesInfo messages.
/**
 * It calls
 * rmw_dds_common__msg__ParticipantEntitiesInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence__fini(rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence * array);

/// Create array of msg/ParticipantEntitiesInfo messages.
/**
 * It allocates the memory for the array and calls
 * rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence *
rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence__create(size_t size);

/// Destroy array of msg/ParticipantEntitiesInfo messages.
/**
 * It calls
 * rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmw_dds_common
void
rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence__destroy(rmw_dds_common__msg__ParticipantEntitiesInfo__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // RMW_DDS_COMMON__MSG__DETAIL__PARTICIPANT_ENTITIES_INFO__FUNCTIONS_H_
