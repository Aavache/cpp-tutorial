#include <iostream>

// Function to print the elements of an array using a pointer
void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << *(arr + i) << " "; // Dereference the pointer to access the array elements
    }
    std::cout << std::endl;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Array elements using the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Array elements using a pointer and function:" << std::endl;
    printArray(numbers, size);

    return 0;
}
