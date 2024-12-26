//Q3. Binary operator overloading (+)

#include <iostream>
using namespace std;

class number {
private:
    int n;

public:
    void get_n() {
        cout << "Enter the number: ";
        cin >> n;
    }

    void put_n() const {
        cout << "Result: " << n << endl;
    }
    number operator+(const number& Y) {
        number ans;
        ans.n = n + Y.n;
        return ans;
    }
};
int main() {
    number num1, num2, result;
    cout << "Input for num1:" << endl;
    num1.get_n();
    cout << "Input for num2:" << endl;
    num2.get_n();

    result = num1 + num2;

    result.put_n();

    return 0;
}
