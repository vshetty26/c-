//Q1. Abstract Class for Vehicles

#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    virtual void start() = 0; // Pure virtual function
    virtual ~Vehicle() {}    // Virtual destructor
};

// Derived class for Car
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts with a key." << endl;
    }
};

// Derived class for Bike
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts with a kick." << endl;
    }
};

int main() {
    Vehicle* myCar = new Car();
    Vehicle* myBike = new Bike();

    myCar->start();  // Output: Car starts with a key.
    myBike->start(); // Output: Bike starts with a kick.

    delete myCar;
    delete myBike;

    return 0;
}
