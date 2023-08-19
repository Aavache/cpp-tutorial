#include <iostream>

int main() {
    // Integer types
    int age = 25;
    unsigned int positiveValue = 100;
    short smallNumber = 5;
    long longNumber = 1000000;

    // Floating-point types
    float pi = 3.14159f;
    double gravity = 9.81;

    // Character types
    char grade = 'A';

    // Boolean type
    bool isPassed = true;

    // Output values
    std::cout << "Age: " << age << std::endl;
    std::cout << "Positive Value: " << positiveValue << std::endl;
    std::cout << "Small Number: " << smallNumber << std::endl;
    std::cout << "Long Number: " << longNumber << std::endl;
    std::cout << "Pi: " << pi << std::endl;
    std::cout << "Gravity: " << gravity << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Passed: " << std::boolalpha << isPassed << std::endl;

    return 0;
}
