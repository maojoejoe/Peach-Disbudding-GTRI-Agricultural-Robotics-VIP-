#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rosidl_typesupport_introspection_c::rosidl_typesupport_introspection_c" for configuration "RelWithDebInfo"
set_property(TARGET rosidl_typesupport_introspection_c::rosidl_typesupport_introspection_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rosidl_typesupport_introspection_c::rosidl_typesupport_introspection_c PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/rosidl_typesupport_introspection_c.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/rosidl_typesupport_introspection_c.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rosidl_typesupport_introspection_c::rosidl_typesupport_introspection_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_rosidl_typesupport_introspection_c::rosidl_typesupport_introspection_c "${_IMPORT_PREFIX}/lib/rosidl_typesupport_introspection_c.lib" "${_IMPORT_PREFIX}/bin/rosidl_typesupport_introspection_c.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
