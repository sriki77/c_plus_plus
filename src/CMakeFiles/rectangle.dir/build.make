# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/srikanth/wip/eclispe_workspace/cpp_ccn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/srikanth/wip/eclispe_workspace/cpp_ccn

# Include any dependencies generated for this target.
include src/CMakeFiles/rectangle.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/rectangle.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/rectangle.dir/flags.make

src/CMakeFiles/rectangle.dir/Rectangle.cc.o: src/CMakeFiles/rectangle.dir/flags.make
src/CMakeFiles/rectangle.dir/Rectangle.cc.o: src/Rectangle.cc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/srikanth/wip/eclispe_workspace/cpp_ccn/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/CMakeFiles/rectangle.dir/Rectangle.cc.o"
	cd /home/srikanth/wip/eclispe_workspace/cpp_ccn/src && /usr/lib/ccache/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/rectangle.dir/Rectangle.cc.o -c /home/srikanth/wip/eclispe_workspace/cpp_ccn/src/Rectangle.cc

src/CMakeFiles/rectangle.dir/Rectangle.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rectangle.dir/Rectangle.cc.i"
	cd /home/srikanth/wip/eclispe_workspace/cpp_ccn/src && /usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/srikanth/wip/eclispe_workspace/cpp_ccn/src/Rectangle.cc > CMakeFiles/rectangle.dir/Rectangle.cc.i

src/CMakeFiles/rectangle.dir/Rectangle.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rectangle.dir/Rectangle.cc.s"
	cd /home/srikanth/wip/eclispe_workspace/cpp_ccn/src && /usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/srikanth/wip/eclispe_workspace/cpp_ccn/src/Rectangle.cc -o CMakeFiles/rectangle.dir/Rectangle.cc.s

src/CMakeFiles/rectangle.dir/Rectangle.cc.o.requires:
.PHONY : src/CMakeFiles/rectangle.dir/Rectangle.cc.o.requires

src/CMakeFiles/rectangle.dir/Rectangle.cc.o.provides: src/CMakeFiles/rectangle.dir/Rectangle.cc.o.requires
	$(MAKE) -f src/CMakeFiles/rectangle.dir/build.make src/CMakeFiles/rectangle.dir/Rectangle.cc.o.provides.build
.PHONY : src/CMakeFiles/rectangle.dir/Rectangle.cc.o.provides

src/CMakeFiles/rectangle.dir/Rectangle.cc.o.provides.build: src/CMakeFiles/rectangle.dir/Rectangle.cc.o
.PHONY : src/CMakeFiles/rectangle.dir/Rectangle.cc.o.provides.build

# Object files for target rectangle
rectangle_OBJECTS = \
"CMakeFiles/rectangle.dir/Rectangle.cc.o"

# External object files for target rectangle
rectangle_EXTERNAL_OBJECTS =

src/librectangle.so: src/CMakeFiles/rectangle.dir/Rectangle.cc.o
src/librectangle.so: src/CMakeFiles/rectangle.dir/build.make
src/librectangle.so: src/CMakeFiles/rectangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library librectangle.so"
	cd /home/srikanth/wip/eclispe_workspace/cpp_ccn/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rectangle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/rectangle.dir/build: src/librectangle.so
.PHONY : src/CMakeFiles/rectangle.dir/build

src/CMakeFiles/rectangle.dir/requires: src/CMakeFiles/rectangle.dir/Rectangle.cc.o.requires
.PHONY : src/CMakeFiles/rectangle.dir/requires

src/CMakeFiles/rectangle.dir/clean:
	cd /home/srikanth/wip/eclispe_workspace/cpp_ccn/src && $(CMAKE_COMMAND) -P CMakeFiles/rectangle.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/rectangle.dir/clean

src/CMakeFiles/rectangle.dir/depend:
	cd /home/srikanth/wip/eclispe_workspace/cpp_ccn && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/srikanth/wip/eclispe_workspace/cpp_ccn /home/srikanth/wip/eclispe_workspace/cpp_ccn/src /home/srikanth/wip/eclispe_workspace/cpp_ccn /home/srikanth/wip/eclispe_workspace/cpp_ccn/src /home/srikanth/wip/eclispe_workspace/cpp_ccn/src/CMakeFiles/rectangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/rectangle.dir/depend

