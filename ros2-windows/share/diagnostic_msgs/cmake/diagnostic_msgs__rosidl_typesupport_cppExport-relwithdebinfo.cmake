#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "diagnostic_msgs::diagnostic_msgs__rosidl_typesupport_cpp" for configuration "RelWithDebInfo"
set_property(TARGET diagnostic_msgs::diagnostic_msgs__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(diagnostic_msgs::diagnostic_msgs__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/diagnostic_msgs__rosidl_typesupport_cpp.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/diagnostic_msgs__rosidl_typesupport_cpp.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS diagnostic_msgs::diagnostic_msgs__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_diagnostic_msgs::diagnostic_msgs__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/diagnostic_msgs__rosidl_typesupport_cpp.lib" "${_IMPORT_PREFIX}/bin/diagnostic_msgs__rosidl_typesupport_cpp.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
