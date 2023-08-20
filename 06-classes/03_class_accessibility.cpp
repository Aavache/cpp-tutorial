#include <iostream>
#include <string>

class Person {
// Private tells the compiler that the members are accessible only from inside the class
private:
    std::string name;
    int age;

    void printAge() {
        std::cout << "Age: " << age << std::endl;
    }

public:
    // Constructor with parameters
    Person(const std::string& n, int a)
        : name(n), age(a) {
    }

    void introduce() {
        std::cout << "Name: " << name << std::endl;
        printAge();  // Calling private member function
    }
};

int main() {
    Person person("Alice", 25);
    person.introduce();

    //person.name = "Bob";  // Error: 'name' is a private member of 'Person'
    //person.age = 30;  // Error: 'age' is a private member of 'Person'
    //person.printAge();  // Error: 'printAge' is a private member of 'Person'
    return 0;
}
