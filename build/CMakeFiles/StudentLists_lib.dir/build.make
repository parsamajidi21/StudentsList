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
CMAKE_SOURCE_DIR = /home/parsa/Templates/my_Codes/C/StudentsList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parsa/Templates/my_Codes/C/StudentsList/build

# Include any dependencies generated for this target.
include CMakeFiles/StudentLists_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/StudentLists_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/StudentLists_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudentLists_lib.dir/flags.make

CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o: CMakeFiles/StudentLists_lib.dir/flags.make
CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o: ../Src/Student_List.c
CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o: CMakeFiles/StudentLists_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parsa/Templates/my_Codes/C/StudentsList/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o -MF CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o.d -o CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o -c /home/parsa/Templates/my_Codes/C/StudentsList/Src/Student_List.c

CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/parsa/Templates/my_Codes/C/StudentsList/Src/Student_List.c > CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.i

CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/parsa/Templates/my_Codes/C/StudentsList/Src/Student_List.c -o CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.s

# Object files for target StudentLists_lib
StudentLists_lib_OBJECTS = \
"CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o"

# External object files for target StudentLists_lib
StudentLists_lib_EXTERNAL_OBJECTS =

libStudentLists_lib.a: CMakeFiles/StudentLists_lib.dir/Src/Student_List.c.o
libStudentLists_lib.a: CMakeFiles/StudentLists_lib.dir/build.make
libStudentLists_lib.a: CMakeFiles/StudentLists_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parsa/Templates/my_Codes/C/StudentsList/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libStudentLists_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/StudentLists_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StudentLists_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudentLists_lib.dir/build: libStudentLists_lib.a
.PHONY : CMakeFiles/StudentLists_lib.dir/build

CMakeFiles/StudentLists_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StudentLists_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StudentLists_lib.dir/clean

CMakeFiles/StudentLists_lib.dir/depend:
	cd /home/parsa/Templates/my_Codes/C/StudentsList/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parsa/Templates/my_Codes/C/StudentsList /home/parsa/Templates/my_Codes/C/StudentsList /home/parsa/Templates/my_Codes/C/StudentsList/build /home/parsa/Templates/my_Codes/C/StudentsList/build /home/parsa/Templates/my_Codes/C/StudentsList/build/CMakeFiles/StudentLists_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StudentLists_lib.dir/depend

