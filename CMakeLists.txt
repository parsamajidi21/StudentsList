cmake_minimum_required(VERSION 3.1)

project(StudentLists)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Inc )

add_library(StudentLists_lib Inc/Student_List.h Src/Student_List.c)

set(SOURCES
    Src/StudentList.c 
    Src/Student_List.c
)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Inc)

add_executable(Student_List ${SOURCES})