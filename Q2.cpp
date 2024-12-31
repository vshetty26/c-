//Q2. Compile-Time Polymorphism (Function Overloading)

#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << "Sum of 2 numbers: " << calc.add(5, 3) << endl;
    cout << "Sum of 3 numbers: " << calc.add(1, 2, 3) << endl;

    return 0;
}
