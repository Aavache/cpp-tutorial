#include <iostream>

int main() {
    int count = 0;

    while (count < 5) {
        count++; // Increment count before evaluating conditions

        if (count == 2) {
            std::cout << "Skipping iteration " << count << " with continue." << std::endl;
            continue; // Skip the rest of the loop body and go to the next iteration
        }

        if (count == 4) {
            std::cout << "Breaking loop at iteration " << count << " with break." << std::endl;
            break; // Exit the loop
        }

        std::cout << "Iteration " << count << std::endl;
    }

    std::cout << "Loop finished." << std::endl;

    return 0;
}
