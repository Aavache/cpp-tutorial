#include <iostream>
#include <string>

// Base class: Vehicle
class Vehicle {
protected:
    std::string brand;

public:
    Vehicle(const std::string& b) : brand(b) {}

    void displayBrand() const {
        std::cout << "Brand: " << brand << std::endl;
    }
};

// Derived class: Car, child class
class Car : public Vehicle {
private:
    std::string model;

public:
    Car(const std::string& b, const std::string& m)
        : Vehicle(b), model(m) {}

    void displayModel() const {
        std::cout << "Model: " << model << std::endl;
    }
};

// Derived class: ElectricCar (Multi-level Inheritance), grandchild class
class ElectricCar : public Car {
private:
    double batteryCapacity;

public:
    ElectricCar(const std::string& b, const std::string& m, double capacity)
        : Car(b, m), batteryCapacity(capacity) {}

    void displayBatteryCapacity() const {
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh" << std::endl;
    }
};

int main() {
    ElectricCar tesla("Tesla", "Model 3", 75.0);

    std::cout << "Electric Car Information:" << std::endl;
    tesla.displayBrand();
    tesla.displayModel();
    tesla.displayBatteryCapacity();

    return 0;
}
