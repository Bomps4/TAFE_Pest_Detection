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

# Utility rule file for rm_dt.

# Include any custom commands dependencies for this target.
include CMakeFiles/rm_dt.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rm_dt.dir/progress.make

CMakeFiles/rm_dt:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Device tree : Deleting generated files"
	/usr/bin/cmake -E rm -r /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/devicetree

rm_dt: CMakeFiles/rm_dt
rm_dt: CMakeFiles/rm_dt.dir/build.make
.PHONY : rm_dt

# Rule to build all files generated by this target.
CMakeFiles/rm_dt.dir/build: rm_dt
.PHONY : CMakeFiles/rm_dt.dir/build

CMakeFiles/rm_dt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rm_dt.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rm_dt.dir/clean

CMakeFiles/rm_dt.dir/depend:
	cd /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/CMakeFiles/rm_dt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rm_dt.dir/depend

