// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\NavSatStatus.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__TRAITS_HPP_

#include "sensor_msgs/msg/detail/nav_sat_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::NavSatStatus>()
{
  return "sensor_msgs::msg::NavSatStatus";
}

template<>
struct has_fixed_size<sensor_msgs::msg::NavSatStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_msgs::msg::NavSatStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_msgs::msg::NavSatStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__NAV_SAT_STATUS__TRAITS_HPP_
