#ifndef STUDENT_H
#define STUDENT_H

#include "../Person.h"

using namespace std;

class Student final : public Person {
    string studentName;
    float grade;

public:
    explicit Student(const string &studentName, float grade);

    [[nodiscard]] string getName() const override;

    [[nodiscard]] Role getRole() const override;

    [[nodiscard]] float getGrade() const;
};

#endif // STUDENT_H
