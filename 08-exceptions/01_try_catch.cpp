#include <iostream>
#include <stdexcept>

int safeDivision(int dividend, int divisor) {
    if (divisor == 0) {
        throw divisor;
    }
    return dividend / divisor;
}

int main() {
    // try-catch block
    try {
        int dividend, divisor;
        
        std::cout << "Enter dividend: ";
        std::cin >> dividend;
        
        std::cout << "Enter divisor (0 will trigger a math error): ";
        std::cin >> divisor;

        int result = safeDivision(dividend, divisor);
        std::cout << "Result of division: " << result << std::endl;
    } catch (int value){
        std::cerr << "Exception caught dividing with " << value << std::endl;
    }

    return 0;
}
