#include <iostream>

class MyDummyClass
{
public:
    void printHello()
    {
        std::cout << "Hello" << std::endl;
    }
};

int main(){
    // Initializing both a pointer and an object
    MyDummyClass* dummyPtr = new MyDummyClass();
   
    delete dummyPtr; // Don't forget to delete the object

    dummyPtr = nullptr; // Set the pointer to nullptr to avoid dangling pointer

    return 0;
}