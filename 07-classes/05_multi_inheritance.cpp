#include <iostream>
#include <string>

// Base class: Person
class Person {
protected:
    std::string name;

public:
    // The initialization of the name member is done in the initialization list
    Person(const std::string& n) : name(n) {}

    void display() const {
        std::cout << "Name: " << name << std::endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    int studentId;

public:
    Student(const std::string& n, int id) : Person(n), studentId(id) {}

    void displayStudent() const {
        display();
        std::cout << "Student ID: " << studentId << std::endl;
    }
};

// Derived class: Employee
class Employee : public Person {
private:
    int employeeId;

public:
    Employee(const std::string& n, int id) : Person(n), employeeId(id) {}

    void displayEmployee() const {
        display();
        std::cout << "Employee ID: " << employeeId << std::endl;
    }
};

// Derived class: WorkingStudent (Multiple Inheritance)
class WorkingStudent : public Student, public Employee {
public:
    WorkingStudent(const std::string& n, int studentId, int employeeId)
        : Student(n, studentId), Employee(n, employeeId) {}

    void displayWorkingStudent() const {
        displayStudent(); // Call displayStudent() from Student
        displayEmployee(); //call displayEmployee() from Employee
    }
};

int main() {
    WorkingStudent ws("Alice", 123, 456);

    std::cout << "Working Student Information:" << std::endl;
    ws.displayWorkingStudent();

    return 0;
}
