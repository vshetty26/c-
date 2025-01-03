//Q2. Class Template

#include <iostream>
using namespace std;

template <typename T>
class Box {
private:
    T value;
public:
    Box(T val) : value(val) {}
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Box<int> intBox(10);
    Box<string> strBox("Hello");

    intBox.display();      // Value: 10
    strBox.display();      // Value: Hello

    return 0;
}
