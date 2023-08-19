#include <iostream>

int main() {
    // Array declaration and initialization
    int numbers[5]; // Declare an array of 5 integers

    // Initialize array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Access and output array elements
    std::cout << "Array elements:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

    // Array initialization with values
    double temperatures[7] = {22.5, 24.0, 23.8, 26.2, 25.5, 24.7, 22.9};

    // Calculate Average Temperature
    double sum = 0.0;
    for (int i = 0; i < 7; ++i) {
        sum += temperatures[i];
    }

    // The size of the array can be calculated in various ways, here we use the sizeof() operator
    // rather than hard-coding the size of the array as in the for loop above.
    // The only issue is that sizeof() returns the size in bytes, so we need to divide by the size
    int arrSize = sizeof(temperatures) / sizeof(temperatures[0]);
    double averageTemperature = sum / arrSize;

    std::cout << "Average temperature: " << averageTemperature << std::endl;

    return 0;
}
