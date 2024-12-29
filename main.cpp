#include <iostream>

#include "Repository/GradeManagement.h"

using namespace std;

int main() {
    GradeManagement gradeTracker;

    // Add students
    gradeTracker.addStudent("Alice", 85.5f);
    gradeTracker.addStudent("Bob", 92.0f);
    gradeTracker.addStudent("Charlie", 78.0f);
    gradeTracker.addStudent("Diana", 88.5f);

    // Display students
    std::cout << "Student Grades:\n";
    gradeTracker.displayStudents();

    // Calculate average
    std::cout << "\nAverage Grade: " << gradeTracker.calculateAverage() << std::endl;

    // Find highest and lowest grades
    std::cout << "Highest Grade: " << gradeTracker.findHighest() << std::endl;
    std::cout << "Lowest Grade: " << gradeTracker.findLowest() << std::endl;

    return 0;
}
