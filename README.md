# **Student Class**

The `Student` class is a C++ implementation that inherits from a `Person` class. It encapsulates student-specific attributes like name and grade, while overriding methods to define the student's role.

---

## **Features**
- Inherits from the `Person` class.
- Overrides the `getRole` method to return `Role::Student`.
- Provides methods to retrieve the student's name and grade.

---

## **Requirements**
- **C++ Compiler**: Requires C++17 or later.
- **Dependencies**: The `Person` class with the following features:
  - A constructor: `Person(const std::string& name, Role role)`
  - An enumeration `Role` that includes `Role::Student`.

---

## **Usage**

Include `Student.h` and `Student.cpp` in your project. Below is a quick demonstration:

```cpp
Student student("John Doe", 88.5f);
std::cout << student.getName() << " has a grade of " << student.getGrade() << std::endl;
