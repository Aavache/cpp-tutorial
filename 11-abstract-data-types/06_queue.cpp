#include <iostream>
#include <queue> // For std::queue

int main() {
    // Create a queue of integers
    std::queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the elements in the queue
    std::cout << "Queue elements:" << std::endl;
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " "; // Access the front element
        myQueue.pop(); // Remove the front element
    }
    std::cout << std::endl;

    return 0;
}
