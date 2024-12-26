//Q1. Unary operator

#include <iostream>
using namespace std;

class demo
{
public:
    int num;
    demo(int a)
    {
        num = a;
        display();
    }
    void display()
    {
        cout << "Number: " << num << endl;
    }
};

int main()
{
    demo obj(10); 
    return 0;
}
