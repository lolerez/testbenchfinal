#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "motor_controller::motor_controller__rosidl_typesupport_fastrtps_c" for configuration ""
set_property(TARGET motor_controller::motor_controller__rosidl_typesupport_fastrtps_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(motor_controller::motor_controller__rosidl_typesupport_fastrtps_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmotor_controller__rosidl_typesupport_fastrtps_c.so"
  IMPORTED_SONAME_NOCONFIG "libmotor_controller__rosidl_typesupport_fastrtps_c.so"
  )

list(APPEND _cmake_import_check_targets motor_controller::motor_controller__rosidl_typesupport_fastrtps_c )
list(APPEND _cmake_import_check_files_for_motor_controller::motor_controller__rosidl_typesupport_fastrtps_c "${_IMPORT_PREFIX}/lib/libmotor_controller__rosidl_typesupport_fastrtps_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)