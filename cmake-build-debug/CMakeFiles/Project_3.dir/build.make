# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /cygdrive/c/Users/matev/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/matev/.CLion2017.2/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/matev/ClionProjects/Project 3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Project_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_3.dir/flags.make

CMakeFiles/Project_3.dir/main.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_3.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/main.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/main.cpp"

CMakeFiles/Project_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/main.cpp" > CMakeFiles/Project_3.dir/main.cpp.i

CMakeFiles/Project_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/main.cpp" -o CMakeFiles/Project_3.dir/main.cpp.s

CMakeFiles/Project_3.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/main.cpp.o.requires

CMakeFiles/Project_3.dir/main.cpp.o.provides: CMakeFiles/Project_3.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/main.cpp.o.provides

CMakeFiles/Project_3.dir/main.cpp.o.provides.build: CMakeFiles/Project_3.dir/main.cpp.o


CMakeFiles/Project_3.dir/Patient.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/Patient.cpp.o: ../Patient.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project_3.dir/Patient.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/Patient.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/Patient.cpp"

CMakeFiles/Project_3.dir/Patient.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/Patient.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/Patient.cpp" > CMakeFiles/Project_3.dir/Patient.cpp.i

CMakeFiles/Project_3.dir/Patient.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/Patient.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/Patient.cpp" -o CMakeFiles/Project_3.dir/Patient.cpp.s

CMakeFiles/Project_3.dir/Patient.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/Patient.cpp.o.requires

CMakeFiles/Project_3.dir/Patient.cpp.o.provides: CMakeFiles/Project_3.dir/Patient.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/Patient.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/Patient.cpp.o.provides

CMakeFiles/Project_3.dir/Patient.cpp.o.provides.build: CMakeFiles/Project_3.dir/Patient.cpp.o


CMakeFiles/Project_3.dir/TriageQueue.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/TriageQueue.cpp.o: ../TriageQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Project_3.dir/TriageQueue.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/TriageQueue.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/TriageQueue.cpp"

CMakeFiles/Project_3.dir/TriageQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/TriageQueue.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/TriageQueue.cpp" > CMakeFiles/Project_3.dir/TriageQueue.cpp.i

CMakeFiles/Project_3.dir/TriageQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/TriageQueue.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/TriageQueue.cpp" -o CMakeFiles/Project_3.dir/TriageQueue.cpp.s

CMakeFiles/Project_3.dir/TriageQueue.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/TriageQueue.cpp.o.requires

CMakeFiles/Project_3.dir/TriageQueue.cpp.o.provides: CMakeFiles/Project_3.dir/TriageQueue.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/TriageQueue.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/TriageQueue.cpp.o.provides

CMakeFiles/Project_3.dir/TriageQueue.cpp.o.provides.build: CMakeFiles/Project_3.dir/TriageQueue.cpp.o


CMakeFiles/Project_3.dir/TreatedVector.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/TreatedVector.cpp.o: ../TreatedVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Project_3.dir/TreatedVector.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/TreatedVector.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/TreatedVector.cpp"

CMakeFiles/Project_3.dir/TreatedVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/TreatedVector.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/TreatedVector.cpp" > CMakeFiles/Project_3.dir/TreatedVector.cpp.i

CMakeFiles/Project_3.dir/TreatedVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/TreatedVector.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/TreatedVector.cpp" -o CMakeFiles/Project_3.dir/TreatedVector.cpp.s

CMakeFiles/Project_3.dir/TreatedVector.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/TreatedVector.cpp.o.requires

CMakeFiles/Project_3.dir/TreatedVector.cpp.o.provides: CMakeFiles/Project_3.dir/TreatedVector.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/TreatedVector.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/TreatedVector.cpp.o.provides

CMakeFiles/Project_3.dir/TreatedVector.cpp.o.provides.build: CMakeFiles/Project_3.dir/TreatedVector.cpp.o


CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o: ../DoctorPatientMap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/DoctorPatientMap.cpp"

CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/DoctorPatientMap.cpp" > CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.i

CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/DoctorPatientMap.cpp" -o CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.s

CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.requires

CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.provides: CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.provides

CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.provides.build: CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o


CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o: ../AllPatientsVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/AllPatientsVector.cpp"

CMakeFiles/Project_3.dir/AllPatientsVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/AllPatientsVector.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/AllPatientsVector.cpp" > CMakeFiles/Project_3.dir/AllPatientsVector.cpp.i

CMakeFiles/Project_3.dir/AllPatientsVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/AllPatientsVector.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/AllPatientsVector.cpp" -o CMakeFiles/Project_3.dir/AllPatientsVector.cpp.s

CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.requires

CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.provides: CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.provides

CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.provides.build: CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o


CMakeFiles/Project_3.dir/Logger.cpp.o: CMakeFiles/Project_3.dir/flags.make
CMakeFiles/Project_3.dir/Logger.cpp.o: ../Logger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Project_3.dir/Logger.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Project_3.dir/Logger.cpp.o -c "/cygdrive/c/Users/matev/ClionProjects/Project 3/Logger.cpp"

CMakeFiles/Project_3.dir/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_3.dir/Logger.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/matev/ClionProjects/Project 3/Logger.cpp" > CMakeFiles/Project_3.dir/Logger.cpp.i

CMakeFiles/Project_3.dir/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_3.dir/Logger.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/matev/ClionProjects/Project 3/Logger.cpp" -o CMakeFiles/Project_3.dir/Logger.cpp.s

CMakeFiles/Project_3.dir/Logger.cpp.o.requires:

.PHONY : CMakeFiles/Project_3.dir/Logger.cpp.o.requires

CMakeFiles/Project_3.dir/Logger.cpp.o.provides: CMakeFiles/Project_3.dir/Logger.cpp.o.requires
	$(MAKE) -f CMakeFiles/Project_3.dir/build.make CMakeFiles/Project_3.dir/Logger.cpp.o.provides.build
.PHONY : CMakeFiles/Project_3.dir/Logger.cpp.o.provides

CMakeFiles/Project_3.dir/Logger.cpp.o.provides.build: CMakeFiles/Project_3.dir/Logger.cpp.o


# Object files for target Project_3
Project_3_OBJECTS = \
"CMakeFiles/Project_3.dir/main.cpp.o" \
"CMakeFiles/Project_3.dir/Patient.cpp.o" \
"CMakeFiles/Project_3.dir/TriageQueue.cpp.o" \
"CMakeFiles/Project_3.dir/TreatedVector.cpp.o" \
"CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o" \
"CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o" \
"CMakeFiles/Project_3.dir/Logger.cpp.o"

# External object files for target Project_3
Project_3_EXTERNAL_OBJECTS =

Project_3.exe: CMakeFiles/Project_3.dir/main.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/Patient.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/TriageQueue.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/TreatedVector.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/Logger.cpp.o
Project_3.exe: CMakeFiles/Project_3.dir/build.make
Project_3.exe: CMakeFiles/Project_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable Project_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_3.dir/build: Project_3.exe

.PHONY : CMakeFiles/Project_3.dir/build

CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/main.cpp.o.requires
CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/Patient.cpp.o.requires
CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/TriageQueue.cpp.o.requires
CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/TreatedVector.cpp.o.requires
CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/DoctorPatientMap.cpp.o.requires
CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/AllPatientsVector.cpp.o.requires
CMakeFiles/Project_3.dir/requires: CMakeFiles/Project_3.dir/Logger.cpp.o.requires

.PHONY : CMakeFiles/Project_3.dir/requires

CMakeFiles/Project_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_3.dir/clean

CMakeFiles/Project_3.dir/depend:
	cd "/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/matev/ClionProjects/Project 3" "/cygdrive/c/Users/matev/ClionProjects/Project 3" "/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug" "/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug" "/cygdrive/c/Users/matev/ClionProjects/Project 3/cmake-build-debug/CMakeFiles/Project_3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Project_3.dir/depend

