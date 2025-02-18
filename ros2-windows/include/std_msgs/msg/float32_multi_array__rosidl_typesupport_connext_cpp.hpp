// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from std_msgs:msg\Float32MultiArray.idl
// generated code does not contain a copyright notice


#ifndef STD_MSGS__MSG__FLOAT32_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STD_MSGS__MSG__FLOAT32_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "std_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "std_msgs/msg/detail/float32_multi_array__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "std_msgs/msg/dds_connext/Float32MultiArray_Support.h"
#include "std_msgs/msg/dds_connext/Float32MultiArray_Plugin.h"
#include "ndds/ndds_cpp.h"

#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// forward declaration of internal CDR Stream
struct ConnextStaticCDRStream;

// forward declaration of DDS types
class DDSDomainParticipant;
class DDSDataWriter;
class DDSDataReader;


namespace std_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__Float32MultiArray();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_msgs
convert_ros_message_to_dds(
  const std_msgs::msg::Float32MultiArray & ros_message,
  std_msgs::msg::dds_::Float32MultiArray_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_msgs
convert_dds_message_to_ros(
  const std_msgs::msg::dds_::Float32MultiArray_ & dds_message,
  std_msgs::msg::Float32MultiArray & ros_message);

bool
to_cdr_stream__Float32MultiArray(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__Float32MultiArray(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace std_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_std_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  std_msgs, msg,
  Float32MultiArray)();

#ifdef __cplusplus
}
#endif


#endif  // STD_MSGS__MSG__FLOAT32_MULTI_ARRAY__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
