#include <iostream>

int main() {
    int count = 1;

    // This loop will run until the condition is false, the difference with
    // the while loop is that the condition is checked at the end of the loop
    do {
        std::cout << "Iteration " << count << std::endl;
        ++count; // Increment count for the next iteration
    } while(count <= 5);

    std::cout << "Loop has finished." << std::endl;

    return 0;
}