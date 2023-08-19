#include <iostream>

// Function to swap two integers using pointers
// It is efficient to pass pointers as parameters to functions becuase
// the address of the variables are lighter than the variables themselves
void swapIntegers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to modify an integer using a pointer
void modifyValue(int* numPtr) {
    // You can still modify the content
    *numPtr = 100;
}

int main() {
    int x = 5, y = 10;
    int num = 42;

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
    swapIntegers(&x, &y);
    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

    std::cout << "Before modification: num = " << num << std::endl;
    modifyValue(&num);
    std::cout << "After modification: num = " << num << std::endl;

    return 0;
}
