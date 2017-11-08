cmake_minimum_required(VERSION 3.6)
project(Project_3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Patient.cpp Patient.h TriageQueue.cpp TriageQueue.h Utilities.h TreatedVector.cpp TreatedVector.h DoctorPatientMap.cpp DoctorPatientMap.h AllPatientsVector.cpp AllPatientsVector.h Logger.cpp Logger.h)
add_executable(Project_3 ${SOURCE_FILES})