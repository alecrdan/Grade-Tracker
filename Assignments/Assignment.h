//
// Created by alecd on 12/28/2024.
//

#ifndef ASSIGNMENTS_H
#define ASSIGNMENTS_H
#include <string>

using namespace std;

enum class Department {
    UNSET,
    History,
    English,
    Math,
    Science,
};

class Assignments final {
    string className;
    Department department;
    int courseLevel;

public:
    explicit Assignments(string className, Department department, int courseLevel);

    [[nodiscard]] string getClassName();

    [[nodiscard]] static Department getDepartment() { return Department::UNSET; }

    [[nodiscard]] int getLevel() const;

    ~Assignments() = default;
};


#endif //ASSIGNMENTS_H
