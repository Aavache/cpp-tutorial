#include <iostream>

// Base class: Shape
class Shape {
public:
    // Virtual means that the function can be overriden by derived classes
    virtual double area(){
        return 0.0;
    }
};

// Derived class: Circle, inherits from Shape 
// :All circles are shapes however not all shapes are circle
class Circle : public Shape {
private:
    // radius is a private member of Circle, it doesn't exist in Shape
    // for instance, a rectangle doesn't have a radius but it's still a shape
    double radius;

public:
    // Constructor with parameters
    Circle(double r) {
        radius = r;
    }

    double area() override {
        // This also relates to polymorphism, a single function can be used to
        // calculate the area of different shapes
        // PI * r^2
        return 3.14159 * radius * radius;
    }
};

// Derived class: Rectangle, inherits from Shape
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h){
        width = w;
        height = h;
    }

    double area() override {
        // This also relates to polymorphism, a single function can be used to
        // calculate the area of different shapes
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Polymorphism: using pointers to base class
    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    std::cout << "Circle Area: " << shape1->area() << std::endl;
    std::cout << "Rectangle Area: " << shape2->area() << std::endl;

    return 0;
}

