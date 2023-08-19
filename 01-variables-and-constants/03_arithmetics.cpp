#include <iostream>
#include <stdexcept>

int main() {
    // Arithmetic operations
    int a = 10, b = 3;
    double x = 15.0, y = 0.0;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    double quotient = a / b; // Careful when dividing by zero

    // Modulo operation
    int remainder = a % b;

    // Output results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Modulo: " << remainder << std::endl;

    return 0;
}
