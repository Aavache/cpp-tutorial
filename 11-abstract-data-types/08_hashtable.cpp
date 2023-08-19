#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Create an unordered map of strings to integers
    std::unordered_map<std::string, int> myHashTable;

    // Add key-value pairs to the unordered map
    myHashTable["Alice"] = 25;
    myHashTable["Bob"] = 30;
    myHashTable["Carol"] = 22;

    // Display the elements using an iterator
    std::cout << "Unordered map elements:" << std::endl;
    for (const auto& pair : myHashTable) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Access and modify values using keys
    std::cout << "Age of Bob: " << myHashTable["Bob"] << std::endl;
    myHashTable["Bob"] = 32; // Modify the value

    // Check if a key exists in the unordered map
    if (myHashTable.find("Alice") != myHashTable.end()) {
        std::cout << "Alice is in the unordered map." << std::endl;
    } else {
        std::cout << "Alice is not in the unordered map." << std::endl;
    }

    // Remove a key-value pair from the unordered map
    myHashTable.erase("Carol");

    // Display the modified unordered map
    std::cout << "Modified unordered map:" << std::endl;
    for (const auto& pair : myHashTable) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
