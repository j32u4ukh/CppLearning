# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/j32u4ukh/Documents/CppLearning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/j32u4ukh/Documents/CppLearning/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/main.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

CMakeFiles/main.dir/src/n_queens.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/n_queens.cpp.o: ../src/n_queens.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/n_queens.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/n_queens.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/n_queens.cpp

CMakeFiles/main.dir/src/n_queens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/n_queens.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/n_queens.cpp > CMakeFiles/main.dir/src/n_queens.cpp.i

CMakeFiles/main.dir/src/n_queens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/n_queens.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/n_queens.cpp -o CMakeFiles/main.dir/src/n_queens.cpp.s

CMakeFiles/main.dir/src/utils/utils.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils/utils.cpp.o: ../src/utils/utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/utils/utils.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/utils/utils.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/utils/utils.cpp

CMakeFiles/main.dir/src/utils/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/utils/utils.cpp > CMakeFiles/main.dir/src/utils/utils.cpp.i

CMakeFiles/main.dir/src/utils/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/utils/utils.cpp -o CMakeFiles/main.dir/src/utils/utils.cpp.s

CMakeFiles/main.dir/src/utils/utils_array.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils/utils_array.cpp.o: ../src/utils/utils_array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/utils/utils_array.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/utils/utils_array.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/utils/utils_array.cpp

CMakeFiles/main.dir/src/utils/utils_array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils/utils_array.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/utils/utils_array.cpp > CMakeFiles/main.dir/src/utils/utils_array.cpp.i

CMakeFiles/main.dir/src/utils/utils_array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils/utils_array.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/utils/utils_array.cpp -o CMakeFiles/main.dir/src/utils/utils_array.cpp.s

CMakeFiles/main.dir/src/utils/utils_map.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils/utils_map.cpp.o: ../src/utils/utils_map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/utils/utils_map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/utils/utils_map.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/utils/utils_map.cpp

CMakeFiles/main.dir/src/utils/utils_map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils/utils_map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/utils/utils_map.cpp > CMakeFiles/main.dir/src/utils/utils_map.cpp.i

CMakeFiles/main.dir/src/utils/utils_map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils/utils_map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/utils/utils_map.cpp -o CMakeFiles/main.dir/src/utils/utils_map.cpp.s

CMakeFiles/main.dir/src/utils/utils_string.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils/utils_string.cpp.o: ../src/utils/utils_string.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/utils/utils_string.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/utils/utils_string.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/utils/utils_string.cpp

CMakeFiles/main.dir/src/utils/utils_string.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils/utils_string.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/utils/utils_string.cpp > CMakeFiles/main.dir/src/utils/utils_string.cpp.i

CMakeFiles/main.dir/src/utils/utils_string.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils/utils_string.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/utils/utils_string.cpp -o CMakeFiles/main.dir/src/utils/utils_string.cpp.s

CMakeFiles/main.dir/src/utils/utils_vector.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/utils/utils_vector.cpp.o: ../src/utils/utils_vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/utils/utils_vector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/utils/utils_vector.cpp.o -c /home/j32u4ukh/Documents/CppLearning/src/utils/utils_vector.cpp

CMakeFiles/main.dir/src/utils/utils_vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/utils/utils_vector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/j32u4ukh/Documents/CppLearning/src/utils/utils_vector.cpp > CMakeFiles/main.dir/src/utils/utils_vector.cpp.i

CMakeFiles/main.dir/src/utils/utils_vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/utils/utils_vector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/j32u4ukh/Documents/CppLearning/src/utils/utils_vector.cpp -o CMakeFiles/main.dir/src/utils/utils_vector.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.o" \
"CMakeFiles/main.dir/src/n_queens.cpp.o" \
"CMakeFiles/main.dir/src/utils/utils.cpp.o" \
"CMakeFiles/main.dir/src/utils/utils_array.cpp.o" \
"CMakeFiles/main.dir/src/utils/utils_map.cpp.o" \
"CMakeFiles/main.dir/src/utils/utils_string.cpp.o" \
"CMakeFiles/main.dir/src/utils/utils_vector.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/src/n_queens.cpp.o
main: CMakeFiles/main.dir/src/utils/utils.cpp.o
main: CMakeFiles/main.dir/src/utils/utils_array.cpp.o
main: CMakeFiles/main.dir/src/utils/utils_map.cpp.o
main: CMakeFiles/main.dir/src/utils/utils_string.cpp.o
main: CMakeFiles/main.dir/src/utils/utils_vector.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/j32u4ukh/Documents/CppLearning/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/j32u4ukh/Documents/CppLearning/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/j32u4ukh/Documents/CppLearning /home/j32u4ukh/Documents/CppLearning /home/j32u4ukh/Documents/CppLearning/build /home/j32u4ukh/Documents/CppLearning/build /home/j32u4ukh/Documents/CppLearning/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

