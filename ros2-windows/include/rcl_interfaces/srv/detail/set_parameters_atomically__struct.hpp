// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rcl_interfaces:srv\SetParametersAtomically.idl
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS_ATOMICALLY__STRUCT_HPP_
#define RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS_ATOMICALLY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parameters'
#include "rcl_interfaces/msg/detail/parameter__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Request __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Request __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetParametersAtomically_Request_
{
  using Type = SetParametersAtomically_Request_<ContainerAllocator>;

  explicit SetParametersAtomically_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetParametersAtomically_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _parameters_type =
    std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename ContainerAllocator::template rebind<rcl_interfaces::msg::Parameter_<ContainerAllocator>>::other>;
  _parameters_type parameters;

  // setters for named parameter idiom
  Type & set__parameters(
    const std::vector<rcl_interfaces::msg::Parameter_<ContainerAllocator>, typename ContainerAllocator::template rebind<rcl_interfaces::msg::Parameter_<ContainerAllocator>>::other> & _arg)
  {
    this->parameters = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Request
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Request
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetParametersAtomically_Request_ & other) const
  {
    if (this->parameters != other.parameters) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetParametersAtomically_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetParametersAtomically_Request_

// alias to use template instance with default allocator
using SetParametersAtomically_Request =
  rcl_interfaces::srv::SetParametersAtomically_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rcl_interfaces


// Include directives for member types
// Member 'result'
#include "rcl_interfaces/msg/detail/set_parameters_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Response __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Response __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetParametersAtomically_Response_
{
  using Type = SetParametersAtomically_Response_<ContainerAllocator>;

  explicit SetParametersAtomically_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    (void)_init;
  }

  explicit SetParametersAtomically_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _result_type =
    rcl_interfaces::msg::SetParametersResult_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const rcl_interfaces::msg::SetParametersResult_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Response
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__srv__SetParametersAtomically_Response
    std::shared_ptr<rcl_interfaces::srv::SetParametersAtomically_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetParametersAtomically_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetParametersAtomically_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetParametersAtomically_Response_

// alias to use template instance with default allocator
using SetParametersAtomically_Response =
  rcl_interfaces::srv::SetParametersAtomically_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rcl_interfaces

namespace rcl_interfaces
{

namespace srv
{

struct SetParametersAtomically
{
  using Request = rcl_interfaces::srv::SetParametersAtomically_Request;
  using Response = rcl_interfaces::srv::SetParametersAtomically_Response;
};

}  // namespace srv

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__SRV__DETAIL__SET_PARAMETERS_ATOMICALLY__STRUCT_HPP_
