#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "shape_msgs::shape_msgs__rosidl_typesupport_introspection_c" for configuration "RelWithDebInfo"
set_property(TARGET shape_msgs::shape_msgs__rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(shape_msgs::shape_msgs__rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/shape_msgs__rosidl_typesupport_introspection_c.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/shape_msgs__rosidl_typesupport_introspection_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS shape_msgs::shape_msgs__rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_shape_msgs::shape_msgs__rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/shape_msgs__rosidl_typesupport_introspection_c.lib" "${_IMPORT_PREFIX}/bin/shape_msgs__rosidl_typesupport_introspection_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
