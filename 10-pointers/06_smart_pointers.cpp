#include <iostream>
#include <memory> // For smart pointers

class MyClass {
public:
    MyClass(int val) : value(val) {
        std::cout << "Constructing MyClass with value: " << value << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructing MyClass with value: " << value << std::endl;
    }

    void print() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    // So far we have used raw pointers to dynamically allocate memory
    // however they are error-prone and can lead to memory leaks

    // Using std::unique_ptr
    std::unique_ptr<MyClass> uniquePtr(new MyClass(42));
    uniquePtr->print();

    // std::unique_ptr automatically cleans up memory when it goes out of scope

    // Using std::shared_ptr
    std::shared_ptr<MyClass> sharedPtr1 = std::make_shared<MyClass>(100);
    std::shared_ptr<MyClass> sharedPtr2 = sharedPtr1;

    sharedPtr1->print();
    sharedPtr2->print();

    // Both sharedPtr1 and sharedPtr2 share ownership of the object

    return 0;
}
