# Install script for directory: /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/pmsis/api/cmake_install.cmake")
  include("/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/pmsis/implem/cmake_install.cmake")
  include("/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/pmsis/archi/cmake_install.cmake")
  include("/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/pmsis/bsp/cmake_install.cmake")

endif()

