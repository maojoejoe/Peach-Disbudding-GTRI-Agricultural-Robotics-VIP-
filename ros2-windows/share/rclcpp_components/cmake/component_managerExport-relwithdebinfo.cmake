#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rclcpp_components::component_manager" for configuration "RelWithDebInfo"
set_property(TARGET rclcpp_components::component_manager APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(rclcpp_components::component_manager PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/component_manager.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/component_manager.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS rclcpp_components::component_manager )
list(APPEND _IMPORT_CHECK_FILES_FOR_rclcpp_components::component_manager "${_IMPORT_PREFIX}/lib/component_manager.lib" "${_IMPORT_PREFIX}/bin/component_manager.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
