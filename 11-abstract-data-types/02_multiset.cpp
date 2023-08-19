#include <iostream>
#include <set>

int main() {
    // Create a multiset of integers
    // Multisets are similar to sets, but they allow duplicate elements
    // However it is different to list in that the ordering is sorted rather
    // than following the insertion order
    std::multiset<int> myMultiset;

    // Add elements to the multiset
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(30);
    myMultiset.insert(20); // Duplicate elements are allowed

    // Display the elements using an iterator
    std::cout << "Multiset elements: ";
    for (const int& element : myMultiset) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Check the count of a specific element
    int count = myMultiset.count(20);
    std::cout << "Count of element 20: " << count << std::endl;

    // Remove specific elements from the multiset
    myMultiset.erase(20);

    // Display the modified multiset using a range-based loop
    std::cout << "Modified multiset: ";
    for (const int& element : myMultiset) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
