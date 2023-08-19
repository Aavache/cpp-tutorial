#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map of strings to integers
    // They are similar to dictionaries in Python, a
    // key-value pair data structure
    std::map<std::string, int> myMap;

    // Add key-value pairs to the map
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap["Carol"] = 22;

    // Display the elements using an iterator
    std::cout << "Map elements:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Access and modify values using keys
    std::cout << "Age of Bob: " << myMap["Bob"] << std::endl;
    myMap["Bob"] = 32; // Modify the value

    // Check if a key exists in the map
    if (myMap.find("Alice") != myMap.end()) {
        std::cout << "Alice is in the map." << std::endl;
    } else {
        std::cout << "Alice is not in the map." << std::endl;
    }

    // Remove a key-value pair from the map
    myMap.erase("Carol");

    // Display the modified map
    std::cout << "Modified map:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
