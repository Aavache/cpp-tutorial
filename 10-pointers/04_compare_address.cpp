#include <iostream>

int main() {
    int num = 43;
    int* numPtr = &num;     // First pointer to an integer    
    int* numPtr2 = &num;    // Second pointer to an integer

    std::cout << "Address of num: " << &num << std::endl;

    if (numPtr == numPtr2) {
        std::cout << "numPtr and numPtr2 point to the same address" << std::endl;
    }
    else {
        // This will never be executed
        std::cout << "numPtr and numPtr2 do not point to the same address" << std::endl;
    }

    return 0
}
