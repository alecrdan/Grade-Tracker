// Created by alecd on 12/28/2024.

#include "Assignment.h"

Assignments::Assignments(std::string className, Department department, int courseLevel) {
    this->className = std::move(className);
    this->department = department;
    this->courseLevel = courseLevel;
}

// Implementation of getClassName
string Assignments::getClassName() {
    return className;
}

// Implementation of getLevel
int Assignments::getLevel() const {
    return courseLevel;
}
