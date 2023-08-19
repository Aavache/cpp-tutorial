#include <iostream>
#include <stack> // For std::stack

int main() {
    // Create a stack of integers
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Display the elements in the stack
    std::cout << "Stack elements:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " "; // Access the top element
        myStack.pop(); // Remove the top element
    }
    std::cout << std::endl;

    return 0;
}
