# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2"

# Include any dependencies generated for this target.
include CMakeFiles/trial.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/trial.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/trial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/trial.dir/flags.make

CMakeFiles/trial.dir/codegen:
.PHONY : CMakeFiles/trial.dir/codegen

CMakeFiles/trial.dir/calculator.cpp.o: CMakeFiles/trial.dir/flags.make
CMakeFiles/trial.dir/calculator.cpp.o: /Users/arrwa/Desktop/cs2lab/assignment\ 1/CS2-Calculator-Arwa-Amina/calculator.cpp
CMakeFiles/trial.dir/calculator.cpp.o: CMakeFiles/trial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/trial.dir/calculator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/trial.dir/calculator.cpp.o -MF CMakeFiles/trial.dir/calculator.cpp.o.d -o CMakeFiles/trial.dir/calculator.cpp.o -c "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/calculator.cpp"

CMakeFiles/trial.dir/calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/trial.dir/calculator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/calculator.cpp" > CMakeFiles/trial.dir/calculator.cpp.i

CMakeFiles/trial.dir/calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/trial.dir/calculator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/calculator.cpp" -o CMakeFiles/trial.dir/calculator.cpp.s

CMakeFiles/trial.dir/test.cpp.o: CMakeFiles/trial.dir/flags.make
CMakeFiles/trial.dir/test.cpp.o: /Users/arrwa/Desktop/cs2lab/assignment\ 1/CS2-Calculator-Arwa-Amina/test.cpp
CMakeFiles/trial.dir/test.cpp.o: CMakeFiles/trial.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/trial.dir/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/trial.dir/test.cpp.o -MF CMakeFiles/trial.dir/test.cpp.o.d -o CMakeFiles/trial.dir/test.cpp.o -c "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/test.cpp"

CMakeFiles/trial.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/trial.dir/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/test.cpp" > CMakeFiles/trial.dir/test.cpp.i

CMakeFiles/trial.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/trial.dir/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/test.cpp" -o CMakeFiles/trial.dir/test.cpp.s

# Object files for target trial
trial_OBJECTS = \
"CMakeFiles/trial.dir/calculator.cpp.o" \
"CMakeFiles/trial.dir/test.cpp.o"

# External object files for target trial
trial_EXTERNAL_OBJECTS =

trial: CMakeFiles/trial.dir/calculator.cpp.o
trial: CMakeFiles/trial.dir/test.cpp.o
trial: CMakeFiles/trial.dir/build.make
trial: CMakeFiles/trial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable trial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/trial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/trial.dir/build: trial
.PHONY : CMakeFiles/trial.dir/build

CMakeFiles/trial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/trial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/trial.dir/clean

CMakeFiles/trial.dir/depend:
	cd "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina" "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina" "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2" "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2" "/Users/arrwa/Desktop/cs2lab/assignment 1/CS2-Calculator-Arwa-Amina/build2/CMakeFiles/trial.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/trial.dir/depend

