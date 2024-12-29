//
// Created by alecd on 12/28/2024.
//

#include "Teacher.h"

Teacher::Teacher(const string& teacherName, const int teacherRating) {
    this->teacherName = teacherName;
    this->teacherRating = teacherRating;
}

string Teacher::getName() const {
    return teacherName;
}

Role Teacher::getRole() const {
    return Role::Teacher;
}

int Teacher::getRating() const {
    return teacherRating;
}
