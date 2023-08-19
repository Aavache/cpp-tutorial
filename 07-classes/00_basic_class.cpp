#include <iostream>
#include <string>

// Define a class named 'Student'
class Student {
public:
    // Member variables
    std::string name;
    int age;
    double gpa;

    // Member function to display student information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};

int main() {
    // Create an object of the 'Student' class
    Student student1;
    student1.name = "Alice";
    student1.age = 20;
    student1.gpa = 3.8;

    // Create another object of the 'Student' class
    Student student2;
    student2.name = "Bob";
    student2.age = 22;
    student2.gpa = 3.5;

    // Display information using member function
    std::cout << "Student 1:" << std::endl;
    student1.displayInfo();
    std::cout << std::endl;

    std::cout << "Student 2:" << std::endl;
    student2.displayInfo();

    return 0;
}
