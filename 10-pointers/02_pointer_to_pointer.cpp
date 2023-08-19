#include <iostream>

int main() {
    int num = 42;
    int* numPtr = &num;     // Pointer to an integer

    int** ptrToNumPtr = &numPtr; // Pointer to a pointer (pointer to int*)

    std::cout << "Value of num: " << num << std::endl;
    std::cout << "Address of num: " << &num << std::endl;

    std::cout << "Value stored in numPtr: " << *numPtr << std::endl;
    std::cout << "Address stored in ptrToNumPtr: " << ptrToNumPtr << std::endl;

    std::cout << "Value pointed to by ptrToNumPtr: " << **ptrToNumPtr << std::endl;

    return 0;
}
