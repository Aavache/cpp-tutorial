#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to a file
    std::ofstream outFile("example.txt"); // Open for writing
    if (outFile.is_open()) {
        outFile << "Hello, world!" << std::endl;
        outFile << "This is a sample file." << std::endl;
        outFile.close(); // Close the file
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Unable to open file for writing." << std::endl;
    }

    // Reading from a file
    std::ifstream inFile("example.txt"); // Open for reading
    if (inFile.is_open()) {
        std::string line;
        std::cout << "Contents of the file:" << std::endl;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close(); // Close the file
    } else {
        std::cerr << "Unable to open file for reading." << std::endl;
    }

    return 0;
}
