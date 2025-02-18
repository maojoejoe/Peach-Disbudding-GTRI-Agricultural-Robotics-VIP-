// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from map_msgs:msg\PointCloud2Update.idl
// generated code does not contain a copyright notice


#ifndef MAP_MSGS__MSG__POINT_CLOUD2_UPDATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define MAP_MSGS__MSG__POINT_CLOUD2_UPDATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "map_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "map_msgs/msg/detail/point_cloud2_update__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "map_msgs/msg/dds_connext/PointCloud2Update_Support.h"
#include "map_msgs/msg/dds_connext/PointCloud2Update_Plugin.h"
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


namespace map_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__PointCloud2Update();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
convert_ros_message_to_dds(
  const map_msgs::msg::PointCloud2Update & ros_message,
  map_msgs::msg::dds_::PointCloud2Update_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
convert_dds_message_to_ros(
  const map_msgs::msg::dds_::PointCloud2Update_ & dds_message,
  map_msgs::msg::PointCloud2Update & ros_message);

bool
to_cdr_stream__PointCloud2Update(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__PointCloud2Update(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace map_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_map_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  map_msgs, msg,
  PointCloud2Update)();

#ifdef __cplusplus
}
#endif


#endif  // MAP_MSGS__MSG__POINT_CLOUD2_UPDATE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
