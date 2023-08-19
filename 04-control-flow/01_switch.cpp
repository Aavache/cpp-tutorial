#include <iostream>

int main() {
    char grade;

    std::cout << "Enter your grade (A, B, C, D, or F): ";
    std::cin >> grade;

    // Switch statement, this can be also implemented with if-else statements
    // but switch statements are more readable when there are many cases
    switch (grade) {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "Satisfactory." << std::endl;
            break;
        case 'D':
            std::cout << "Needs improvement." << std::endl;
            break;
        case 'F':
            std::cout << "Failed." << std::endl;
            break;
        default:
            std::cout << "Invalid grade." << std::endl;
            break;
    }

    return 0;
}
