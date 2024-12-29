#include "Student.h"

Student::Student(const string &studentName, const float grade) {
    this->studentName = studentName;
    this->role = Role::Student;
    this->grade = grade;
}

string Student::getName() const {
    return studentName;
}

Role Student::getRole() const {
    return role;
}

float Student::getGrade() const {
    return grade;
}
