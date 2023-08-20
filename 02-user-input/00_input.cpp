#include <iostream>

int main() {
    // Declare variables to store user inputs
    int age;
    double height;
    std::string name;

    // Prompt the user for inputs
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height (in meters): ";
    std::cin >> height;

    std::cout << "Enter your name: ";
    std::cin.ignore(); // Clear newline left in buffer
    std::getline(std::cin, name);

    // Output the user inputs
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " meters" << std::endl;

    return 0;
}
