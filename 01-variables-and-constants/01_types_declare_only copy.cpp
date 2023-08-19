#include <iostream>

int main() {
    // Declare variables without initializing
    int age;
    unsigned int positiveValue;
    short smallNumber;
    long longNumber;
    float pi;
    double gravity;
    char grade;
    bool isPassed;

    // Output uninitialized values (may contain garbage values)
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
