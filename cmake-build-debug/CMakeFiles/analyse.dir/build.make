# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_COMMAND = /snap/clion/178/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/178/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mohamed/Documents/GitHub/analyse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mohamed/Documents/GitHub/analyse/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/analyse.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/analyse.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/analyse.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/analyse.dir/flags.make

CMakeFiles/analyse.dir/main.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/main.c.o: ../main.c
CMakeFiles/analyse.dir/main.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/analyse.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/main.c.o -MF CMakeFiles/analyse.dir/main.c.o.d -o CMakeFiles/analyse.dir/main.c.o -c /home/mohamed/Documents/GitHub/analyse/main.c

CMakeFiles/analyse.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/main.c > CMakeFiles/analyse.dir/main.c.i

CMakeFiles/analyse.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/main.c -o CMakeFiles/analyse.dir/main.c.s

CMakeFiles/analyse.dir/cFiles/calculScore.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/cFiles/calculScore.c.o: ../cFiles/calculScore.c
CMakeFiles/analyse.dir/cFiles/calculScore.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/analyse.dir/cFiles/calculScore.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/cFiles/calculScore.c.o -MF CMakeFiles/analyse.dir/cFiles/calculScore.c.o.d -o CMakeFiles/analyse.dir/cFiles/calculScore.c.o -c /home/mohamed/Documents/GitHub/analyse/cFiles/calculScore.c

CMakeFiles/analyse.dir/cFiles/calculScore.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/cFiles/calculScore.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/cFiles/calculScore.c > CMakeFiles/analyse.dir/cFiles/calculScore.c.i

CMakeFiles/analyse.dir/cFiles/calculScore.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/cFiles/calculScore.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/cFiles/calculScore.c -o CMakeFiles/analyse.dir/cFiles/calculScore.c.s

CMakeFiles/analyse.dir/cFiles/transcription.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/cFiles/transcription.c.o: ../cFiles/transcription.c
CMakeFiles/analyse.dir/cFiles/transcription.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/analyse.dir/cFiles/transcription.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/cFiles/transcription.c.o -MF CMakeFiles/analyse.dir/cFiles/transcription.c.o.d -o CMakeFiles/analyse.dir/cFiles/transcription.c.o -c /home/mohamed/Documents/GitHub/analyse/cFiles/transcription.c

CMakeFiles/analyse.dir/cFiles/transcription.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/cFiles/transcription.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/cFiles/transcription.c > CMakeFiles/analyse.dir/cFiles/transcription.c.i

CMakeFiles/analyse.dir/cFiles/transcription.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/cFiles/transcription.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/cFiles/transcription.c -o CMakeFiles/analyse.dir/cFiles/transcription.c.s

CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o: ../cFiles/calculScorePolarite.c
CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o -MF CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o.d -o CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o -c /home/mohamed/Documents/GitHub/analyse/cFiles/calculScorePolarite.c

CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/cFiles/calculScorePolarite.c > CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.i

CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/cFiles/calculScorePolarite.c -o CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.s

CMakeFiles/analyse.dir/cFiles/traduction.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/cFiles/traduction.c.o: ../cFiles/traduction.c
CMakeFiles/analyse.dir/cFiles/traduction.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/analyse.dir/cFiles/traduction.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/cFiles/traduction.c.o -MF CMakeFiles/analyse.dir/cFiles/traduction.c.o.d -o CMakeFiles/analyse.dir/cFiles/traduction.c.o -c /home/mohamed/Documents/GitHub/analyse/cFiles/traduction.c

CMakeFiles/analyse.dir/cFiles/traduction.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/cFiles/traduction.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/cFiles/traduction.c > CMakeFiles/analyse.dir/cFiles/traduction.c.i

CMakeFiles/analyse.dir/cFiles/traduction.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/cFiles/traduction.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/cFiles/traduction.c -o CMakeFiles/analyse.dir/cFiles/traduction.c.s

CMakeFiles/analyse.dir/cFiles/utils.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/cFiles/utils.c.o: ../cFiles/utils.c
CMakeFiles/analyse.dir/cFiles/utils.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/analyse.dir/cFiles/utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/cFiles/utils.c.o -MF CMakeFiles/analyse.dir/cFiles/utils.c.o.d -o CMakeFiles/analyse.dir/cFiles/utils.c.o -c /home/mohamed/Documents/GitHub/analyse/cFiles/utils.c

CMakeFiles/analyse.dir/cFiles/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/cFiles/utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/cFiles/utils.c > CMakeFiles/analyse.dir/cFiles/utils.c.i

CMakeFiles/analyse.dir/cFiles/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/cFiles/utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/cFiles/utils.c -o CMakeFiles/analyse.dir/cFiles/utils.c.s

CMakeFiles/analyse.dir/cFiles/seqCodante.c.o: CMakeFiles/analyse.dir/flags.make
CMakeFiles/analyse.dir/cFiles/seqCodante.c.o: ../cFiles/seqCodante.c
CMakeFiles/analyse.dir/cFiles/seqCodante.c.o: CMakeFiles/analyse.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/analyse.dir/cFiles/seqCodante.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/analyse.dir/cFiles/seqCodante.c.o -MF CMakeFiles/analyse.dir/cFiles/seqCodante.c.o.d -o CMakeFiles/analyse.dir/cFiles/seqCodante.c.o -c /home/mohamed/Documents/GitHub/analyse/cFiles/seqCodante.c

CMakeFiles/analyse.dir/cFiles/seqCodante.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/analyse.dir/cFiles/seqCodante.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/mohamed/Documents/GitHub/analyse/cFiles/seqCodante.c > CMakeFiles/analyse.dir/cFiles/seqCodante.c.i

CMakeFiles/analyse.dir/cFiles/seqCodante.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/analyse.dir/cFiles/seqCodante.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/mohamed/Documents/GitHub/analyse/cFiles/seqCodante.c -o CMakeFiles/analyse.dir/cFiles/seqCodante.c.s

# Object files for target analyse
analyse_OBJECTS = \
"CMakeFiles/analyse.dir/main.c.o" \
"CMakeFiles/analyse.dir/cFiles/calculScore.c.o" \
"CMakeFiles/analyse.dir/cFiles/transcription.c.o" \
"CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o" \
"CMakeFiles/analyse.dir/cFiles/traduction.c.o" \
"CMakeFiles/analyse.dir/cFiles/utils.c.o" \
"CMakeFiles/analyse.dir/cFiles/seqCodante.c.o"

# External object files for target analyse
analyse_EXTERNAL_OBJECTS =

analyse: CMakeFiles/analyse.dir/main.c.o
analyse: CMakeFiles/analyse.dir/cFiles/calculScore.c.o
analyse: CMakeFiles/analyse.dir/cFiles/transcription.c.o
analyse: CMakeFiles/analyse.dir/cFiles/calculScorePolarite.c.o
analyse: CMakeFiles/analyse.dir/cFiles/traduction.c.o
analyse: CMakeFiles/analyse.dir/cFiles/utils.c.o
analyse: CMakeFiles/analyse.dir/cFiles/seqCodante.c.o
analyse: CMakeFiles/analyse.dir/build.make
analyse: CMakeFiles/analyse.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking C executable analyse"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/analyse.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/analyse.dir/build: analyse
.PHONY : CMakeFiles/analyse.dir/build

CMakeFiles/analyse.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/analyse.dir/cmake_clean.cmake
.PHONY : CMakeFiles/analyse.dir/clean

CMakeFiles/analyse.dir/depend:
	cd /home/mohamed/Documents/GitHub/analyse/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mohamed/Documents/GitHub/analyse /home/mohamed/Documents/GitHub/analyse /home/mohamed/Documents/GitHub/analyse/cmake-build-debug /home/mohamed/Documents/GitHub/analyse/cmake-build-debug /home/mohamed/Documents/GitHub/analyse/cmake-build-debug/CMakeFiles/analyse.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/analyse.dir/depend

