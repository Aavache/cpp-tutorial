#include <iostream>

// Function with two integer parameters
int add(int a, int b) {
    std::cout << "Using integer addition." << std::endl;
    return a + b;
}

// Function with two double parameters
double add(double a, double b) {
    std::cout << "Using double addition." << std::endl;
    return a + b;
}

int main() {
    // Depending on the character of the arguments, the compiler will choose the correct function
    // even though they share the same name.
    int intResult = add(3, 4);
    double doubleResult = add(3.5, 4.5);

    std::cout << "Integer addition result: " << intResult << std::endl;
    std::cout << "Double addition result: " << doubleResult << std::endl;

    return 0;
}
