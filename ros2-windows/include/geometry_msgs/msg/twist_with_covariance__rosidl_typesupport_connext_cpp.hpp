// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from geometry_msgs:msg\TwistWithCovariance.idl
// generated code does not contain a copyright notice


#ifndef GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "geometry_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "geometry_msgs/msg/dds_connext/TwistWithCovariance_Support.h"
#include "geometry_msgs/msg/dds_connext/TwistWithCovariance_Plugin.h"
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


namespace geometry_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__TwistWithCovariance();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geometry_msgs
convert_ros_message_to_dds(
  const geometry_msgs::msg::TwistWithCovariance & ros_message,
  geometry_msgs::msg::dds_::TwistWithCovariance_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geometry_msgs
convert_dds_message_to_ros(
  const geometry_msgs::msg::dds_::TwistWithCovariance_ & dds_message,
  geometry_msgs::msg::TwistWithCovariance & ros_message);

bool
to_cdr_stream__TwistWithCovariance(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__TwistWithCovariance(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace geometry_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_geometry_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  geometry_msgs, msg,
  TwistWithCovariance)();

#ifdef __cplusplus
}
#endif


#endif  // GEOMETRY_MSGS__MSG__TWIST_WITH_COVARIANCE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
