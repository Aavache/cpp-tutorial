#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> myList;

    // Add elements to the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    // Display the elements using an iterator
    std::cout << "List elements: ";
    for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Display the elements using an for auto loop
    std::cout << "List elements with auto: ";
    for (auto i: myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Insert an element at the beginning
    myList.push_front(5);

    // Remove an element from the end
    myList.pop_back();

    // Display the modified list using a range-based loop
    std::cout << "Modified list: ";
    for (const int& element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
