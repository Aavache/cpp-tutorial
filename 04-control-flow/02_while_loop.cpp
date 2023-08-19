#include <iostream>

int main() {
    int count = 1;

    // This loop will run until the condition is false
    while (count <= 5) {
        std::cout << "Iteration " << count << std::endl;
        ++count; // Increment count for the next iteration
    }

    std::cout << "Loop has finished." << std::endl;

    return 0;
}