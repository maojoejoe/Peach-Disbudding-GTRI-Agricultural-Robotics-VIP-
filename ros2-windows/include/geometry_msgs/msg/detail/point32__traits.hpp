// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from geometry_msgs:msg\Point32.idl
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__DETAIL__POINT32__TRAITS_HPP_
#define GEOMETRY_MSGS__MSG__DETAIL__POINT32__TRAITS_HPP_

#include "geometry_msgs/msg/detail/point32__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<geometry_msgs::msg::Point32>()
{
  return "geometry_msgs::msg::Point32";
}

template<>
struct has_fixed_size<geometry_msgs::msg::Point32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<geometry_msgs::msg::Point32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<geometry_msgs::msg::Point32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GEOMETRY_MSGS__MSG__DETAIL__POINT32__TRAITS_HPP_
