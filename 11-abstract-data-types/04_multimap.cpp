#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a multimap of strings to integers
    std::multimap<std::string, int> myMultimap;

    // Add key-value pairs to the multimap
    myMultimap.insert(std::make_pair("Alice", 25));
    myMultimap.insert(std::make_pair("Bob", 30));
    myMultimap.insert(std::make_pair("Carol", 22));
    myMultimap.insert(std::make_pair("Bob", 28)); // Allows duplicate keys

    // Display the elements using an iterator
    std::cout << "Multimap elements:" << std::endl;
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Access and modify values using keys
    std::cout << "Ages of Bob:" << std::endl;
    auto range = myMultimap.equal_range("Bob");
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << " ";
    }
    std::cout << std::endl;

    // Check if a key exists in the multimap
    if (myMultimap.find("Alice") != myMultimap.end()) {
        std::cout << "Alice is in the multimap." << std::endl;
    } else {
        std::cout << "Alice is not in the multimap." << std::endl;
    }

    // Remove all elements with a specific key
    myMultimap.erase("Bob");

    // Display the modified multimap
    std::cout << "Modified multimap:" << std::endl;
    for (const auto& pair : myMultimap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}
