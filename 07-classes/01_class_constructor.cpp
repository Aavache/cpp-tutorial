#include <iostream>
#include <string>

class Student {
// Public tells the compiler that the members are accessible from outside the class
public:
    // Member variables
    std::string name;
    int age;
    double gpa;
    // Constructor with parameters, this is exeuted when the object is created
    Student(std::string n, int a, double g){
        name = n;
        age = a;
        gpa = g;
    }

    // Member function to display student information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "GPA: " << gpa << std::endl;
    }
};

int main() {
    // Create objects using the constructor
    Student student1("Alice", 20, 3.8);
    Student student2("Bob", 22, 3.5);

    // Display information using member function
    std::cout << "Student 1:" << std::endl;
    student1.displayInfo();
    std::cout << std::endl;

    std::cout << "Student 2:" << std::endl;
    student2.displayInfo();

    return 0;
}
