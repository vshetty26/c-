// Q1. Swapping without 3rd variable

#include <iostream>
using namespace std;

class SwapperNoThird {
public:
    void swap(int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
};

int main() {
    SwapperNoThird swapper;
    int x = 5, y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapper.swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
