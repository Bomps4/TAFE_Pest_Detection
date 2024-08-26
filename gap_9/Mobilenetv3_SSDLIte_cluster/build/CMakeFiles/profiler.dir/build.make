# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build

# Utility rule file for profiler.

# Include any custom commands dependencies for this target.
include CMakeFiles/profiler.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/profiler.dir/progress.make

CMakeFiles/profiler:
	/home/bomps/Scrivania/workfile/gap_sdk_private/utils/gapy_v2/bin/gapy --target=gap9.evk --target-dir=/home/bomps/Scrivania/workfile/gap_sdk_private/utils/gapy_v2/targets --platform=gvsoc --work-dir=/home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build --binary=/home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/Mobv3SSDLite --target-property=boot.flash_device=mram --target-property=boot.mode=flash --openocd-cable=/home/bomps/Scrivania/workfile/gap_sdk_private/utils/openocd_tools/tcl/gapuino_ftdi.cfg --openocd-script=/home/bomps/Scrivania/workfile/gap_sdk_private/utils/openocd_tools/tcl/gap9revb.tcl --openocd-tools=/home/bomps/Scrivania/workfile/gap_sdk_private/utils/openocd_tools --multi-flash-content=/home/bomps/Scrivania/workfile/gap_sdk_private/utils/layouts/default_layout_multi_readfs.json --flash-property=/home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/Mobv3SSDLite@mram:app:binary --config-opt="gvsoc/debug-mode=true" --config-opt="gvsoc/events/gen_gtkw=false" prepare && profiler gvsoc_config.json --signal-tree-file=/home/bomps/Scrivania/workfile/gap_sdk_private/tools/profiler_v2/gui/images/signalstree_gap9.json

profiler: CMakeFiles/profiler
profiler: CMakeFiles/profiler.dir/build.make
.PHONY : profiler

# Rule to build all files generated by this target.
CMakeFiles/profiler.dir/build: profiler
.PHONY : CMakeFiles/profiler.dir/build

CMakeFiles/profiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/profiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/profiler.dir/clean

CMakeFiles/profiler.dir/depend:
	cd /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/CMakeFiles/profiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/profiler.dir/depend

