//Q1.1. Runtime Polymorphism (Method Overriding)

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

int main() {
    Shape* shape;
    
    Circle circle;
    Rectangle rectangle;
    
    // Demonstrating polymorphism
    shape = &circle;
    shape->draw(); // Calls Circle's draw method

    shape = &rectangle;
    shape->draw(); // Calls Rectangle's draw method

    return 0;
}
