//
// Created by Alec Daniels on 12/28/2024.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

enum class Role {
    Unset,
    Teacher,
    Student,
};

class Person {
public:
    string name{};
    Role role = Role::Unset;

    virtual ~Person() = default;

    [[nodiscard]] virtual string getName() const = 0;

    [[nodiscard]] virtual Role getRole() const = 0;
};

#endif // PERSON_H
