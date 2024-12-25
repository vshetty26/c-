// 2. Check if a number is Even or Odd

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 2 == 0) {
        cout << "0"; // Even
    } else {
        cout << "1"; // Odd
    }

    return 0;
}