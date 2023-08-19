#include <iostream>

int main() {
    // Anonymous Structure
    // It's a more complex variable that can contain multiple values with different types
    struct{
        int x;
        int y;
        char id;
    } Point;

    Point.x = 3;
    Point.y = 7;
    Point.id = 'A';

    std::cout << "Point coordinates: (" << Point.x << ", " << Point.y << ", " << Point.id << ")" << std::endl;

    return 0;
}
