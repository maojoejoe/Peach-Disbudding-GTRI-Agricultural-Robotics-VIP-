// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from example_interfaces:msg\UInt16.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "example_interfaces/msg/detail/u_int16__rosidl_typesupport_introspection_c.h"
#include "example_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "example_interfaces/msg/detail/u_int16__functions.h"
#include "example_interfaces/msg/detail/u_int16__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void UInt16__rosidl_typesupport_introspection_c__UInt16_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  example_interfaces__msg__UInt16__init(message_memory);
}

void UInt16__rosidl_typesupport_introspection_c__UInt16_fini_function(void * message_memory)
{
  example_interfaces__msg__UInt16__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UInt16__rosidl_typesupport_introspection_c__UInt16_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(example_interfaces__msg__UInt16, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UInt16__rosidl_typesupport_introspection_c__UInt16_message_members = {
  "example_interfaces__msg",  // message namespace
  "UInt16",  // message name
  1,  // number of fields
  sizeof(example_interfaces__msg__UInt16),
  UInt16__rosidl_typesupport_introspection_c__UInt16_message_member_array,  // message members
  UInt16__rosidl_typesupport_introspection_c__UInt16_init_function,  // function to initialize message memory (memory has to be allocated)
  UInt16__rosidl_typesupport_introspection_c__UInt16_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UInt16__rosidl_typesupport_introspection_c__UInt16_message_type_support_handle = {
  0,
  &UInt16__rosidl_typesupport_introspection_c__UInt16_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_example_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, example_interfaces, msg, UInt16)() {
  if (!UInt16__rosidl_typesupport_introspection_c__UInt16_message_type_support_handle.typesupport_identifier) {
    UInt16__rosidl_typesupport_introspection_c__UInt16_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UInt16__rosidl_typesupport_introspection_c__UInt16_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
