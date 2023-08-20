#include <iostream>

class Car {
public:
    // Constructor
    Car(const std::string& make, const std::string& model) : make(make), model(model) {
        std::cout << "Constructing " << make << " " << model << std::endl;
    }

    // Destructor
    // The destructor is called when the object goes out of scope
    ~Car() {
        std::cout << "Destructing " << make << " " << model << std::endl;
    }

    void Drive() {
        std::cout << "Driving the " << make << " " << model << std::endl;
    }

private:
    std::string make;
    std::string model;
};

int main() {
    Car myCar("Toyota", "Camry");
    myCar.Drive();

    // When myCar goes out of scope, its destructor is automatically called

    return 0;
}