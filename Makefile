# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_SOURCE_DIR = /home/thornton/Documents/dak-engine

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thornton/Documents/dak-engine

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/thornton/Documents/dak-engine/CMakeFiles /home/thornton/Documents/dak-engine/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/thornton/Documents/dak-engine/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named project1

# Build rule for target.
project1: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 project1
.PHONY : project1

# fast build rule for target.
project1/fast:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/build
.PHONY : project1/fast

Display.o: Display.cpp.o

.PHONY : Display.o

# target to build an object file
Display.cpp.o:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/Display.cpp.o
.PHONY : Display.cpp.o

Display.i: Display.cpp.i

.PHONY : Display.i

# target to preprocess a source file
Display.cpp.i:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/Display.cpp.i
.PHONY : Display.cpp.i

Display.s: Display.cpp.s

.PHONY : Display.s

# target to generate assembly for a file
Display.cpp.s:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/Display.cpp.s
.PHONY : Display.cpp.s

Window.o: Window.cpp.o

.PHONY : Window.o

# target to build an object file
Window.cpp.o:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/Window.cpp.o
.PHONY : Window.cpp.o

Window.i: Window.cpp.i

.PHONY : Window.i

# target to preprocess a source file
Window.cpp.i:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/Window.cpp.i
.PHONY : Window.cpp.i

Window.s: Window.cpp.s

.PHONY : Window.s

# target to generate assembly for a file
Window.cpp.s:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/Window.cpp.s
.PHONY : Window.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/project1.dir/build.make CMakeFiles/project1.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... project1"
	@echo "... edit_cache"
	@echo "... Display.o"
	@echo "... Display.i"
	@echo "... Display.s"
	@echo "... Window.o"
	@echo "... Window.i"
	@echo "... Window.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

