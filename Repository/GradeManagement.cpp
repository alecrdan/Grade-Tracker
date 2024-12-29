//
// Created by alecd on 12/29/2024.
//

#include "GradeManagement.h"
#include <iostream>
#include <iomanip>

using namespace std;

void GradeManagement::addStudent(const string &name, float grade) {
    students.emplace_back(name, grade);
}

float GradeManagement::calculateAverage() const {
    if (students.empty()) return 0.0f;

    float grades_sum = 0;
    for (int i = 0; i < students.size() - 1; i++) {
        grades_sum += students[i].getGrade();
    }
    return grades_sum / static_cast<float>(students.size());
}

float GradeManagement::findHighest() const {
    if (students.empty()) return 0.0f;

    float highest_grade = 0.00;
    for (int i = 0; i < students.size() - 1; i++) {
        if (students[i].getGrade() > highest_grade) {
            highest_grade = students[i].getGrade();
        }
    }
    return highest_grade;
}

float GradeManagement::findLowest() const {
    if (students.empty()) return 0.0f;

    float lowest_grade = 101.00;
    for (int i = 0; i < students.size() - 1; i++) {
        if (students[i].getGrade() < lowest_grade) {
            lowest_grade = students[i].getGrade();
        }
    }
    return lowest_grade;
}

void GradeManagement::displayStudents() const {
    std::cout << std::fixed << std::setprecision(2);
    for (int i = 0; i < students.size() - 1; i++) {
        std::cout << "Name: " << students[i].getName() << ", Grade: " << students[i].getGrade() << std::endl;
    }
}
