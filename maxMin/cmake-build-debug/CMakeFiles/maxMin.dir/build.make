# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wuhantao/CLionProjects/practice-c/maxMin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/maxMin.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/maxMin.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/maxMin.dir/flags.make

CMakeFiles/maxMin.dir/main.c.o: CMakeFiles/maxMin.dir/flags.make
CMakeFiles/maxMin.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/maxMin.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/maxMin.dir/main.c.o   -c /Users/wuhantao/CLionProjects/practice-c/maxMin/main.c

CMakeFiles/maxMin.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/maxMin.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wuhantao/CLionProjects/practice-c/maxMin/main.c > CMakeFiles/maxMin.dir/main.c.i

CMakeFiles/maxMin.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/maxMin.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wuhantao/CLionProjects/practice-c/maxMin/main.c -o CMakeFiles/maxMin.dir/main.c.s

# Object files for target maxMin
maxMin_OBJECTS = \
"CMakeFiles/maxMin.dir/main.c.o"

# External object files for target maxMin
maxMin_EXTERNAL_OBJECTS =

maxMin: CMakeFiles/maxMin.dir/main.c.o
maxMin: CMakeFiles/maxMin.dir/build.make
maxMin: CMakeFiles/maxMin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable maxMin"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/maxMin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/maxMin.dir/build: maxMin

.PHONY : CMakeFiles/maxMin.dir/build

CMakeFiles/maxMin.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/maxMin.dir/cmake_clean.cmake
.PHONY : CMakeFiles/maxMin.dir/clean

CMakeFiles/maxMin.dir/depend:
	cd /Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wuhantao/CLionProjects/practice-c/maxMin /Users/wuhantao/CLionProjects/practice-c/maxMin /Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug /Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug /Users/wuhantao/CLionProjects/practice-c/maxMin/cmake-build-debug/CMakeFiles/maxMin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/maxMin.dir/depend

