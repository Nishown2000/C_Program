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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/nishown/C_Program/Electric_Bill_Calculator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nishown/C_Program/Electric_Bill_Calculator/build

# Include any dependencies generated for this target.
include Main/CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Main/CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include Main/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include Main/CMakeFiles/main.dir/flags.make

Main/CMakeFiles/main.dir/src/main.c.o: Main/CMakeFiles/main.dir/flags.make
Main/CMakeFiles/main.dir/src/main.c.o: /home/nishown/C_Program/Electric_Bill_Calculator/Main/src/main.c
Main/CMakeFiles/main.dir/src/main.c.o: Main/CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nishown/C_Program/Electric_Bill_Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Main/CMakeFiles/main.dir/src/main.c.o"
	cd /home/nishown/C_Program/Electric_Bill_Calculator/build/Main && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT Main/CMakeFiles/main.dir/src/main.c.o -MF CMakeFiles/main.dir/src/main.c.o.d -o CMakeFiles/main.dir/src/main.c.o -c /home/nishown/C_Program/Electric_Bill_Calculator/Main/src/main.c

Main/CMakeFiles/main.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/src/main.c.i"
	cd /home/nishown/C_Program/Electric_Bill_Calculator/build/Main && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/nishown/C_Program/Electric_Bill_Calculator/Main/src/main.c > CMakeFiles/main.dir/src/main.c.i

Main/CMakeFiles/main.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/src/main.c.s"
	cd /home/nishown/C_Program/Electric_Bill_Calculator/build/Main && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/nishown/C_Program/Electric_Bill_Calculator/Main/src/main.c -o CMakeFiles/main.dir/src/main.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

Main/main: Main/CMakeFiles/main.dir/src/main.c.o
Main/main: Main/CMakeFiles/main.dir/build.make
Main/main: Function/libfunction.a
Main/main: Main/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nishown/C_Program/Electric_Bill_Calculator/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable main"
	cd /home/nishown/C_Program/Electric_Bill_Calculator/build/Main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Main/CMakeFiles/main.dir/build: Main/main
.PHONY : Main/CMakeFiles/main.dir/build

Main/CMakeFiles/main.dir/clean:
	cd /home/nishown/C_Program/Electric_Bill_Calculator/build/Main && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : Main/CMakeFiles/main.dir/clean

Main/CMakeFiles/main.dir/depend:
	cd /home/nishown/C_Program/Electric_Bill_Calculator/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nishown/C_Program/Electric_Bill_Calculator /home/nishown/C_Program/Electric_Bill_Calculator/Main /home/nishown/C_Program/Electric_Bill_Calculator/build /home/nishown/C_Program/Electric_Bill_Calculator/build/Main /home/nishown/C_Program/Electric_Bill_Calculator/build/Main/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Main/CMakeFiles/main.dir/depend

