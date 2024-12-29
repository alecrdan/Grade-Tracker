//
// Created by alecd on 12/29/2024.
//

#ifndef GRADEMANAGEMENT_H
#define GRADEMANAGEMENT_H

#include <string>
#include <vector>
#include "../Roles/Student/Student.h"

using namespace std;

class GradeManagement {
    vector<Student> students;

public:
    // Add a student to the tracker
    void addStudent(const string &name, float grade);

    // Calculate the average grade
    [[nodiscard]] float calculateAverage() const;

    // Find the highest grade
    [[nodiscard]] float findHighest() const;

    // Find the lowest grade
    [[nodiscard]] float findLowest() const;

    // Display all students
    void displayStudents() const;
};

#endif //GRADEMANAGEMENT_H
