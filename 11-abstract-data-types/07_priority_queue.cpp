#include <iostream>
#include <queue> // For std::priority_queue

int main() {
    // Create a max-heap of integers
    std::priority_queue<int> maxHeap;

    // Insert elements into the heap
    maxHeap.push(40);
    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);

    // Display the elements in the heap
    std::cout << "Max-Heap elements:" << std::endl;
    while (!maxHeap.empty()) {
        std::cout << maxHeap.top() << " "; // Access the top element
        maxHeap.pop(); // Remove the top element
    }
    std::cout << std::endl;

    return 0;
}
