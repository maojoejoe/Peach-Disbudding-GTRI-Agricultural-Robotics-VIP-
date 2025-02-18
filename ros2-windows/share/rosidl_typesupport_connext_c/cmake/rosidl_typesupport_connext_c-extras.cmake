# generated from
# rosidl_typesupport_connext_c/rosidl_typesupport_connext_c-extras.cmake.in

find_package(connext_cmake_module QUIET)
find_package(Connext QUIET MODULE)
if(NOT Connext_FOUND)
  message(STATUS
    "Could not find RTI Connext - skipping rosidl_typesupport_connext_c")
else()
  find_package(ament_cmake_core QUIET REQUIRED)
  ament_register_extension(
    "rosidl_generate_idl_interfaces"
    "rosidl_typesupport_connext_c"
    "rosidl_typesupport_connext_c_generate_interfaces.cmake")

  set(rosidl_typesupport_connext_c_BIN
    "${rosidl_typesupport_connext_c_DIR}/../../../lib/rosidl_typesupport_connext_c/rosidl_typesupport_connext_c")
  normalize_path(rosidl_typesupport_connext_c_BIN
    "${rosidl_typesupport_connext_c_BIN}")

  set(rosidl_typesupport_connext_c_GENERATOR_FILES
    "${rosidl_typesupport_connext_c_DIR}/../../../Lib/site-packages/rosidl_typesupport_connext_c/__init__.py")
  normalize_path(rosidl_typesupport_connext_c_GENERATOR_FILES
    "${rosidl_typesupport_connext_c_GENERATOR_FILES}")

  set(rosidl_typesupport_connext_c_TEMPLATE_DIR
    "${rosidl_typesupport_connext_c_DIR}/../resource")
  normalize_path(rosidl_typesupport_connext_c_TEMPLATE_DIR
    "${rosidl_typesupport_connext_c_TEMPLATE_DIR}")
endif()
