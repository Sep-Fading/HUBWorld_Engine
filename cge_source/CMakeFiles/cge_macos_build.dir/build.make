# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.28.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/sepehrshamloo/Desktop/CGE/cge_source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/sepehrshamloo/Desktop/cge/cge_source

# Include any dependencies generated for this target.
include CMakeFiles/cge_macos_build.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cge_macos_build.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cge_macos_build.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cge_macos_build.dir/flags.make

CMakeFiles/cge_macos_build.dir/main.cpp.o: CMakeFiles/cge_macos_build.dir/flags.make
CMakeFiles/cge_macos_build.dir/main.cpp.o: main.cpp
CMakeFiles/cge_macos_build.dir/main.cpp.o: CMakeFiles/cge_macos_build.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sepehrshamloo/Desktop/cge/cge_source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cge_macos_build.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cge_macos_build.dir/main.cpp.o -MF CMakeFiles/cge_macos_build.dir/main.cpp.o.d -o CMakeFiles/cge_macos_build.dir/main.cpp.o -c /Users/sepehrshamloo/Desktop/cge/cge_source/main.cpp

CMakeFiles/cge_macos_build.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cge_macos_build.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sepehrshamloo/Desktop/cge/cge_source/main.cpp > CMakeFiles/cge_macos_build.dir/main.cpp.i

CMakeFiles/cge_macos_build.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cge_macos_build.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sepehrshamloo/Desktop/cge/cge_source/main.cpp -o CMakeFiles/cge_macos_build.dir/main.cpp.s

CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o: CMakeFiles/cge_macos_build.dir/flags.make
CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o: libs/universal/custom_libraries/window/window.cpp
CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o: CMakeFiles/cge_macos_build.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sepehrshamloo/Desktop/cge/cge_source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o -MF CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o.d -o CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o -c /Users/sepehrshamloo/Desktop/cge/cge_source/libs/universal/custom_libraries/window/window.cpp

CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sepehrshamloo/Desktop/cge/cge_source/libs/universal/custom_libraries/window/window.cpp > CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.i

CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sepehrshamloo/Desktop/cge/cge_source/libs/universal/custom_libraries/window/window.cpp -o CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.s

CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o: CMakeFiles/cge_macos_build.dir/flags.make
CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o: libs/universal/custom_libraries/enginewindow/engine_window.cpp
CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o: CMakeFiles/cge_macos_build.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/sepehrshamloo/Desktop/cge/cge_source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o -MF CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o.d -o CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o -c /Users/sepehrshamloo/Desktop/cge/cge_source/libs/universal/custom_libraries/enginewindow/engine_window.cpp

CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/sepehrshamloo/Desktop/cge/cge_source/libs/universal/custom_libraries/enginewindow/engine_window.cpp > CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.i

CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/sepehrshamloo/Desktop/cge/cge_source/libs/universal/custom_libraries/enginewindow/engine_window.cpp -o CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.s

# Object files for target cge_macos_build
cge_macos_build_OBJECTS = \
"CMakeFiles/cge_macos_build.dir/main.cpp.o" \
"CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o" \
"CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o"

# External object files for target cge_macos_build
cge_macos_build_EXTERNAL_OBJECTS =

debug/cge_macos_build: CMakeFiles/cge_macos_build.dir/main.cpp.o
debug/cge_macos_build: CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/window/window.cpp.o
debug/cge_macos_build: CMakeFiles/cge_macos_build.dir/libs/universal/custom_libraries/enginewindow/engine_window.cpp.o
debug/cge_macos_build: CMakeFiles/cge_macos_build.dir/build.make
debug/cge_macos_build: libs/macos/glfw/glfwMACOS/lib-arm64/libglfw.3.dylib
debug/cge_macos_build: /opt/homebrew/lib/libfreetype.dylib
debug/cge_macos_build: CMakeFiles/cge_macos_build.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/sepehrshamloo/Desktop/cge/cge_source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable debug/cge_macos_build"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cge_macos_build.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cge_macos_build.dir/build: debug/cge_macos_build
.PHONY : CMakeFiles/cge_macos_build.dir/build

CMakeFiles/cge_macos_build.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cge_macos_build.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cge_macos_build.dir/clean

CMakeFiles/cge_macos_build.dir/depend:
	cd /Users/sepehrshamloo/Desktop/cge/cge_source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/sepehrshamloo/Desktop/CGE/cge_source /Users/sepehrshamloo/Desktop/cge/cge_source /Users/sepehrshamloo/Desktop/cge/cge_source /Users/sepehrshamloo/Desktop/cge/cge_source /Users/sepehrshamloo/Desktop/cge/cge_source/CMakeFiles/cge_macos_build.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cge_macos_build.dir/depend

