#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    int result1 = calc.add(10, 5);
    int result2 = calc.subtract(20, 7);

    std::cout << "Addition result: " << result1 << std::endl;
    std::cout << "Subtraction result: " << result2 << std::endl;

    return 0;
}
