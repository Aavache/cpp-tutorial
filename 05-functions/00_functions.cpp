#include <iostream>

// Function without arguments
void sayHello() {
    std::cout << "Hello, world!" << std::endl;
}

// Function with arguments
int add(int a, int b) {
    return a + b;
}

int main() {
    // Calling the function without arguments, functions are alwas called with parentheses
    sayHello();

    // Calling the function with arguments
    int result = add(5, 3);
    std::cout << "5 + 3 = " << result << std::endl;

    return 0;
}
