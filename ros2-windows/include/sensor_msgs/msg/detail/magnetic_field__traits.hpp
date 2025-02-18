// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_msgs:msg\MagneticField.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__TRAITS_HPP_
#define SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__TRAITS_HPP_

#include "sensor_msgs/msg/detail/magnetic_field__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'magnetic_field'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_msgs::msg::MagneticField>()
{
  return "sensor_msgs::msg::MagneticField";
}

template<>
struct has_fixed_size<sensor_msgs::msg::MagneticField>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<sensor_msgs::msg::MagneticField>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<sensor_msgs::msg::MagneticField>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__DETAIL__MAGNETIC_FIELD__TRAITS_HPP_
