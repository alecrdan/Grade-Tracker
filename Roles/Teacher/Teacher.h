//
// Created by alecd on 12/28/2024.
//

#ifndef TEACHER_H
#define TEACHER_H
#include "../Person.h"

using namespace std;

class Teacher : public Person {
public:
    int teacherRating;
    string teacherName;

    explicit Teacher(const string& teacherName, int teacherRating);

    [[nodiscard]] string getName() const override;

    [[nodiscard]] Role getRole() const override;

    [[nodiscard]] int getRating() const;
};


#endif //TEACHER_H
