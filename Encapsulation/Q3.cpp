//Q3. Protected: Accessible in Derived Classes

#include <iostream>
using namespace std;

class Base {
protected:
    int protectedData;  // Accessible in derived classes

public:
    void setProtectedData(int value) {
        protectedData = value;  // Setter
    }
};

class Derived : public Base {
public:
    void displayProtectedData() {
        cout << "Protected Data: " << protectedData << endl;
    }
};

int main() {
    Derived obj;
    obj.setProtectedData(30);  // Access through base class method
    obj.displayProtectedData();  // Access protected data in derived class

    // obj.protectedData = 50;  // Error: protectedData is protected
    return 0;
}
