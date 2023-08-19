#include <iostream>
#include <string>

// Define a simple named structure, it's like a template for a variable
struct Point {
    int x;
    int y;
};

// Define a named structure (struct) with member functions
struct Rectangle {
    int width;
    int height;

    // Member function to calculate area
    int calculateArea() {
        return width * height;
    }

    // Member function to display information
    void displayInfo() {
        std::cout << "Width: " << width << " Height: " << height << std::endl;
    }
};

int main() {
    // Using the Point structure
    Point p1; // Declare a variable of type Point
    p1.x = 3;
    p1.y = 7;

    std::cout << "Point coordinates: (" << p1.x << ", " << p1.y << ")" << std::endl;

    // Using the Rectangle named structure
    Rectangle rect;
    rect.width = 5;
    rect.height = 10;

    std::cout << "Rectangle area: " << rect.calculateArea() << std::endl;
    rect.displayInfo();

    return 0;
}
