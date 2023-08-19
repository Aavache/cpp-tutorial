#include <iostream>
#include <string>

// Base class: Person
class Person {
// The protected access specifier allows derived classes to access the member 
// variables and member functions of the base class
protected:
    std::string name;

public:
    Person(const std::string& n) : name(n) {}
};

// Derived class: Student
class Student : public Person {
public:
    Student(const std::string& n) : Person(n) {}

    void displayStudentName() {
        std::cout << "Student Name: " << name << std::endl; // Accessing protected member variable
    }
};

int main() {
    Student student("Alice");
    student.displayStudentName();

    // However the protected member variables and member functions are not accessible from outside
    Person person("Bob");
    // person.name = "Bob"; // Error: 'name' is a protected member of 'Person'

    return 0;
}
