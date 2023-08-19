#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 4;

    // Declare and initialize a 2D array (matrix)
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Display the matrix elements using nested for loops
    std::cout << "Matrix contents:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
