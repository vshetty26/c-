// Q2. Demo operator ++()

#include <iostream>
using namespace std;

class demo {
public:
    int num;

    demo(int a) {
        num = a;
        display();
    }

    demo operator++() {  
        ++num;
        display();
        return *this;
    }

    void display() {
        cout << "Value of num is: " << num << endl;
    }
};

int main() {
    demo obj(10);  
    ++obj;         
    return 0;
}
