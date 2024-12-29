cmake_minimum_required(VERSION 3.28)
project(GradeTracker)

set(CMAKE_CXX_STANDARD 17)

add_executable(GradeTracker main.cpp
        Roles/Person.cpp
        Roles/Person.h
        Roles/Student/Student.cpp
        Roles/Student/Student.h
        Roles/Teacher/Teacher.cpp
        Roles/Teacher/Teacher.h
        Assignments/Assignment.cpp
        Assignments/Assignment.h
        Repository/GradeManagement.cpp
        Repository/GradeManagement.h
)
