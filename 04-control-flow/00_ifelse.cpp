#include <iostream>

int main() {
    int num, num1, num2;

    std::cout << "enter a number: ";
    std::cin >> num;

    // If statement
    if (num1 == 10){
        std::cout << "The number is not 10." << std::endl;
    }

    std::cout << "enter another number: ";
    std::cin >> num1;

    // If statement with else
    if (num1 % 2 == 0){
        std::cout << "The number is even." << std::endl;
    }
    else{
        std::cout << "The number is odd." << std::endl;
    }

    std::cout << "enter yet another number: ";
    std::cin >> num2;

    // If statement with else if and else
    if (num2 > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (num2 < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
