//Q3. Polymorphism with Pointers to Base Class

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow" << endl;
    }
};

int main() {
    Animal* animal;

    Dog dog;
    Cat cat;

    // Using base class pointer for polymorphism
    animal = &dog;
    animal->sound();  // Calls Dog's sound()

    animal = &cat;
    animal->sound();  // Calls Cat's sound()

    return 0;
}
