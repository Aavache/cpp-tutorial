#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> mySet;

    // Add elements to the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate elements are ignored

    // Display the elements using an iterator
    std::cout << "Set elements: ";
    for (const int& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check if an element exists in the set
    if (mySet.find(20) != mySet.end()) {
        std::cout << "Element 20 is found in the set." << std::endl;
    } else {
        std::cout << "Element 20 is not found in the set." << std::endl;
    }

    // Remove an element from the set
    mySet.erase(10);

    // Display the modified set using a range-based loop
    std::cout << "Modified set: ";
    for (const int& element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
