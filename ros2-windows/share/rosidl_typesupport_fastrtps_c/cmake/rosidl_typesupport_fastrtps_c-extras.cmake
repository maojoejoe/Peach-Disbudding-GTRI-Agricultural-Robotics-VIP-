# generated from
# rosidl_typesupport_fastrtps_c/rosidl_typesupport_fastrtps_c-extras.cmake.in

find_package(fastrtps_cmake_module QUIET)
find_package(fastcdr REQUIRED CONFIG)
find_package(fastrtps REQUIRED CONFIG)
find_package(FastRTPS REQUIRED MODULE)

if(NOT FastRTPS_FOUND)
  message(STATUS
    "Could not find eProsima Fast-RTPS: skipping rosidl_typesupport_fastrtps_c"
  )
else()
  find_package(ament_cmake_core QUIET REQUIRED)
  ament_register_extension(
    "rosidl_generate_idl_interfaces"
    "rosidl_typesupport_fastrtps_c"
    "rosidl_typesupport_fastrtps_c_generate_interfaces.cmake")

  set(rosidl_typesupport_fastrtps_c_BIN
    "${rosidl_typesupport_fastrtps_c_DIR}/../../../lib/rosidl_typesupport_fastrtps_c/rosidl_typesupport_fastrtps_c")
  normalize_path(rosidl_typesupport_fastrtps_c_BIN
    "${rosidl_typesupport_fastrtps_c_BIN}")

  set(rosidl_typesupport_fastrtps_c_GENERATOR_FILES
    "${rosidl_typesupport_fastrtps_c_DIR}/../../../Lib/site-packages/rosidl_typesupport_fastrtps_c/__init__.py")
  normalize_path(rosidl_typesupport_fastrtps_c_GENERATOR_FILES
    "${rosidl_typesupport_fastrtps_c_GENERATOR_FILES}")

  set(rosidl_typesupport_fastrtps_c_TEMPLATE_DIR
    "${rosidl_typesupport_fastrtps_c_DIR}/../resource")
  normalize_path(rosidl_typesupport_fastrtps_c_TEMPLATE_DIR
    "${rosidl_typesupport_fastrtps_c_TEMPLATE_DIR}")
endif()
