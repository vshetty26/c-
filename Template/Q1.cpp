//Q1. Function Template

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integers: " << add(3, 4) << endl;        // 7
    cout << "Floats: " << add(3.5, 4.5) << endl;     // 8.0
    return 0;
}
