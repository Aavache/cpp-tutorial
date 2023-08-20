#include <iostream>

// Recursive function to calculate factorial, i.e. n! = n * (n - 1) * (n - 2) * ... * 1
// A recursive function is a function that calls itself.
int factorial(int n) {
    if (n == 0 || n == 1) {
        // If zero or 1
        return 1;
    } else {
        // Otherwise, call the function again
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Factorial is undefined for negative numbers." << std::endl;
    } else {
        int result = factorial(num);
        std::cout << "Factorial of " << num << " is " << result << std::endl;
    }

    return 0;
}
