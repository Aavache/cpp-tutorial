#include <iostream>

int main() {
    int num = 42; // Declare an integer variable
    int* ptr;     // Declare a pointer to an integer, this is a declaration only
    // Remember that pointers are variables that store addresses not the contents

    ptr = &num;   // Assign the address of 'num' to 'ptr'

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Value stored in ptr: " << *ptr << std::endl;
    std::cout << "Address stored in ptr: " << ptr << std::endl;

    *ptr = 99;    // Modify the value of 'num' indirectly using the pointer

    std::cout << "Modified value of num: " << num << std::endl;

    return 0;
}
