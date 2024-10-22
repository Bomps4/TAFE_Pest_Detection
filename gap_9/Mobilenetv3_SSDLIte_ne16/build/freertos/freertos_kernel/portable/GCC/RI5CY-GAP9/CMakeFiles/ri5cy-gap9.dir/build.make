# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/nano/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/nano/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build

# Include any dependencies generated for this target.
include freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/compiler_depend.make

# Include the progress variables for this target.
include freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/progress.make

# Include the compile flags for this target's objects.
include freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/flags.make

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port_asm.S.obj: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/flags.make
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port_asm.S.obj: /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port_asm.S
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building ASM object freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port_asm.S.obj"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc $(ASM_DEFINES) $(ASM_INCLUDES) $(ASM_FLAGS) -o CMakeFiles/ri5cy-gap9.dir/port_asm.S.obj -c /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port_asm.S

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port_asm.S.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing ASM source to CMakeFiles/ri5cy-gap9.dir/port_asm.S.i"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc $(ASM_DEFINES) $(ASM_INCLUDES) $(ASM_FLAGS) -E /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port_asm.S > CMakeFiles/ri5cy-gap9.dir/port_asm.S.i

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port_asm.S.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling ASM source to assembly CMakeFiles/ri5cy-gap9.dir/port_asm.S.s"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc $(ASM_DEFINES) $(ASM_INCLUDES) $(ASM_FLAGS) -S /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port_asm.S -o CMakeFiles/ri5cy-gap9.dir/port_asm.S.s

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.obj: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/flags.make
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.obj: /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port.c
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.obj: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.obj"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.obj -MF CMakeFiles/ri5cy-gap9.dir/port.c.obj.d -o CMakeFiles/ri5cy-gap9.dir/port.c.obj -c /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port.c

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ri5cy-gap9.dir/port.c.i"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port.c > CMakeFiles/ri5cy-gap9.dir/port.c.i

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ri5cy-gap9.dir/port.c.s"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && /usr/lib/gap_riscv_toolchain/bin/riscv32-unknown-elf-gcc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9/port.c -o CMakeFiles/ri5cy-gap9.dir/port.c.s

# Object files for target ri5cy-gap9
ri5cy__gap9_OBJECTS = \
"CMakeFiles/ri5cy-gap9.dir/port_asm.S.obj" \
"CMakeFiles/ri5cy-gap9.dir/port.c.obj"

# External object files for target ri5cy-gap9
ri5cy__gap9_EXTERNAL_OBJECTS =

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/libri5cy-gap9.a: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port_asm.S.obj
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/libri5cy-gap9.a: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/port.c.obj
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/libri5cy-gap9.a: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/build.make
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/libri5cy-gap9.a: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libri5cy-gap9.a"
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && $(CMAKE_COMMAND) -P CMakeFiles/ri5cy-gap9.dir/cmake_clean_target.cmake
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ri5cy-gap9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/build: freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/libri5cy-gap9.a
.PHONY : freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/build

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/clean:
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 && $(CMAKE_COMMAND) -P CMakeFiles/ri5cy-gap9.dir/cmake_clean.cmake
.PHONY : freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/clean

freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/depend:
	cd /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16 /home/nano/Desktop/Luca/PhD/gap9_5_2/gap_riscv_toolchain_ubuntu/gap_sdk_private/rtos/pmsis/os/freeRTOS/freertos_kernel/portable/GCC/RI5CY-GAP9 /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9 /home/nano/Desktop/Luca/PhD/gap9/coco_object_detection/test_run_8_bits_ne16/build/freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : freertos/freertos_kernel/portable/GCC/RI5CY-GAP9/CMakeFiles/ri5cy-gap9.dir/depend

