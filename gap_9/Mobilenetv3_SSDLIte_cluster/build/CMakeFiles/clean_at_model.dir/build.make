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

# Utility rule file for clean_at_model.

# Include any custom commands dependencies for this target.
include CMakeFiles/clean_at_model.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clean_at_model.dir/progress.make

clean_at_model: CMakeFiles/clean_at_model.dir/build.make
.PHONY : clean_at_model

# Rule to build all files generated by this target.
CMakeFiles/clean_at_model.dir/build: clean_at_model
.PHONY : CMakeFiles/clean_at_model.dir/build

CMakeFiles/clean_at_model.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clean_at_model.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clean_at_model.dir/clean

CMakeFiles/clean_at_model.dir/depend:
	cd /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build /home/bomps/Scrivania/workfile/test_run_MobileNetSSDLite/test_run_8_bits_ne16_not_active/build/CMakeFiles/clean_at_model.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clean_at_model.dir/depend

