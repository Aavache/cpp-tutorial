#include <iostream>
#include <stdexcept>

int safeDivision(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return dividend / divisor;
}

int main() {
    try {
        int dividend, divisor;
        
        std::cout << "Enter dividend: ";
        std::cin >> dividend;
        
        std::cout << "Enter divisor: ";
        std::cin >> divisor;

        int result = safeDivision(dividend, divisor);
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
