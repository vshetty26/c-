// 3. Check if a Number is Divisible by 5 and 10

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num % 10 == 0) {
        // Divisible by 10
        cout << "2";
    } else if (num % 5 == 0) {
        // Divisible by 5 but not 10
        cout << "1";
    } else {
        // Not divisible by 5 or 10
        cout << "0";
    }

    return 0;
}
