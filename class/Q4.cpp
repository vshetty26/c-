// Q4. Even or Odd check

#include <iostream>
using namespace std;

class EvenOddChecker {
public:
    void checkEvenOdd(int num) {
        if (num % 2 == 0) {
            cout << num << " is even." << endl;
        } else {
            cout << num << " is odd." << endl;
        }
    }
};

int main() {
    EvenOddChecker checker;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    checker.checkEvenOdd(number);

    return 0;
}
