#include <iostream>
#include <string>

int main() {
    // Strings are sequences of characters and are declared using double quotes
    // Although they are not primitive types, they are very common and easy to get started with.

    // Declare and initialize strings
    std::string greeting = "Hello, ";
    std::string name = "Alice";

    // Concatenate strings
    std::string message = greeting + name;

    // Get string length
    int messageLength = message.length();

    // Access individual characters
    char firstChar = message[0];
    char lastChar = message[messageLength - 1];

    // Compare the content of the strings
    std::string otherName = "Bob";
    bool areEqual = (name == otherName);

    // Find substring
    size_t position = message.find("Alice");

    // Replace substring
    message.replace(position, 5, "Eve");

    // Output results
    std::cout << "Concatenated message: " << message << std::endl;
    std::cout << "Message length: " << messageLength << std::endl;
    std::cout << "First character: " << firstChar << std::endl;
    std::cout << "Last character: " << lastChar << std::endl;
    std::cout << "Are names equal? " << std::boolalpha << areEqual << std::endl;
    std::cout << "Position of 'Alice': " << position << std::endl;

    return 0;
}
