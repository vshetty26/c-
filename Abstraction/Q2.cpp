//Q1. Abstract Class for Shapes

#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}     // Virtual destructor
};

// Derived class for Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw(); // Output: Drawing a Circle.
    shape2->draw(); // Output: Drawing a Rectangle.

    delete shape1;
    delete shape2;

    return 0;
}
