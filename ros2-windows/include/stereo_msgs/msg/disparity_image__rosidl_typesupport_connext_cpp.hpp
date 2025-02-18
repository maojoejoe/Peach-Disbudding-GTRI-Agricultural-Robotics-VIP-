// generated from rosidl_typesupport_connext_cpp/resource/idl__rosidl_typesupport_connext_cpp.hpp.em
// with input from stereo_msgs:msg\DisparityImage.idl
// generated code does not contain a copyright notice


#ifndef STEREO_MSGS__MSG__DISPARITY_IMAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
#define STEREO_MSGS__MSG__DISPARITY_IMAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "stereo_msgs/msg/rosidl_typesupport_connext_cpp__visibility_control.h"
#include "stereo_msgs/msg/detail/disparity_image__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif

#include "stereo_msgs/msg/dds_connext/DisparityImage_Support.h"
#include "stereo_msgs/msg/dds_connext/DisparityImage_Plugin.h"
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


namespace stereo_msgs
{

namespace msg
{
namespace typesupport_connext_cpp
{

DDS_TypeCode *
get_type_code__DisparityImage();

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_stereo_msgs
convert_ros_message_to_dds(
  const stereo_msgs::msg::DisparityImage & ros_message,
  stereo_msgs::msg::dds_::DisparityImage_ & dds_message);

bool
ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_stereo_msgs
convert_dds_message_to_ros(
  const stereo_msgs::msg::dds_::DisparityImage_ & dds_message,
  stereo_msgs::msg::DisparityImage & ros_message);

bool
to_cdr_stream__DisparityImage(
  const void * untyped_ros_message,
  ConnextStaticCDRStream * cdr_stream);

bool
to_message__DisparityImage(
  const ConnextStaticCDRStream * cdr_stream,
  void * untyped_ros_message);

}  // namespace typesupport_connext_cpp

}  // namespace msg

}  // namespace stereo_msgs


#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CONNEXT_CPP_PUBLIC_stereo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
  rosidl_typesupport_connext_cpp,
  stereo_msgs, msg,
  DisparityImage)();

#ifdef __cplusplus
}
#endif


#endif  // STEREO_MSGS__MSG__DISPARITY_IMAGE__ROSIDL_TYPESUPPORT_CONNEXT_CPP_HPP_
