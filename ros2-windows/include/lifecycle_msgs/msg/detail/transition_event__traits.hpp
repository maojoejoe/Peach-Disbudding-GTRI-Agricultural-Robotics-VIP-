// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lifecycle_msgs:msg\TransitionEvent.idl
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__TRAITS_HPP_
#define LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__TRAITS_HPP_

#include "lifecycle_msgs/msg/detail/transition_event__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'transition'
#include "lifecycle_msgs/msg/detail/transition__traits.hpp"
// Member 'start_state'
// Member 'goal_state'
#include "lifecycle_msgs/msg/detail/state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<lifecycle_msgs::msg::TransitionEvent>()
{
  return "lifecycle_msgs::msg::TransitionEvent";
}

template<>
struct has_fixed_size<lifecycle_msgs::msg::TransitionEvent>
  : std::integral_constant<bool, has_fixed_size<lifecycle_msgs::msg::State>::value && has_fixed_size<lifecycle_msgs::msg::Transition>::value> {};

template<>
struct has_bounded_size<lifecycle_msgs::msg::TransitionEvent>
  : std::integral_constant<bool, has_bounded_size<lifecycle_msgs::msg::State>::value && has_bounded_size<lifecycle_msgs::msg::Transition>::value> {};

template<>
struct is_message<lifecycle_msgs::msg::TransitionEvent>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIFECYCLE_MSGS__MSG__DETAIL__TRANSITION_EVENT__TRAITS_HPP_
