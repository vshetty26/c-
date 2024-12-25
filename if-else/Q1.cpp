//1. Check if a number is Positive, Negative, or Zero

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num > 0) {
        // Positive
        cout << "1"; // or return 1;
    } else if (num < 0) {
        // Negative
        cout << "-1"; // or return -1;
    } else {
        // Zero
        cout << "0"; // or return 0;
    }

    return 0;
}
