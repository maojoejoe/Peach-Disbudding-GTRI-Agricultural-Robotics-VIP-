// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav_msgs:srv\SetMap.idl
// generated code does not contain a copyright notice

#ifndef NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_HPP_
#define NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__struct.hpp"
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav_msgs__srv__SetMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__nav_msgs__srv__SetMap_Request __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMap_Request_
{
  using Type = SetMap_Request_<ContainerAllocator>;

  explicit SetMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_init),
    initial_pose(_init)
  {
    (void)_init;
  }

  explicit SetMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_alloc, _init),
    initial_pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _map_type =
    nav_msgs::msg::OccupancyGrid_<ContainerAllocator>;
  _map_type map;
  using _initial_pose_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _initial_pose_type initial_pose;

  // setters for named parameter idiom
  Type & set__map(
    const nav_msgs::msg::OccupancyGrid_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return *this;
  }
  Type & set__initial_pose(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->initial_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_msgs::srv::SetMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_msgs::srv::SetMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_msgs::srv::SetMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_msgs::srv::SetMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_msgs__srv__SetMap_Request
    std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_msgs__srv__SetMap_Request
    std::shared_ptr<nav_msgs::srv::SetMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMap_Request_ & other) const
  {
    if (this->map != other.map) {
      return false;
    }
    if (this->initial_pose != other.initial_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMap_Request_

// alias to use template instance with default allocator
using SetMap_Request =
  nav_msgs::srv::SetMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav_msgs


#ifndef _WIN32
# define DEPRECATED__nav_msgs__srv__SetMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__nav_msgs__srv__SetMap_Response __declspec(deprecated)
#endif

namespace nav_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetMap_Response_
{
  using Type = SetMap_Response_<ContainerAllocator>;

  explicit SetMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav_msgs::srv::SetMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav_msgs::srv::SetMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav_msgs::srv::SetMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav_msgs::srv::SetMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav_msgs__srv__SetMap_Response
    std::shared_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav_msgs__srv__SetMap_Response
    std::shared_ptr<nav_msgs::srv::SetMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetMap_Response_

// alias to use template instance with default allocator
using SetMap_Response =
  nav_msgs::srv::SetMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace nav_msgs

namespace nav_msgs
{

namespace srv
{

struct SetMap
{
  using Request = nav_msgs::srv::SetMap_Request;
  using Response = nav_msgs::srv::SetMap_Response;
};

}  // namespace srv

}  // namespace nav_msgs

#endif  // NAV_MSGS__SRV__DETAIL__SET_MAP__STRUCT_HPP_
