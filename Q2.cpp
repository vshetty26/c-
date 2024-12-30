// Q2. Addition of two numbers

#include <iostream>
using namespace std;

class Adder {
public:
    int add(int a, int b) {
        return a + b;
    }
};

int main() {
    Adder adder;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = adder.add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
