//Hybrid:

#include <iostream>
using namespace std;

class demo1 {
public:
    int a;
    void getdata1() 
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
};

class demo2
{
public:
    int b;
    void getdata2() {
        cout << "Enter value of b: ";
        cin >> b;
    }
};

class demo3:public demo1, public demo2
{
public:
    int d;
    void getadd() 
    {
        d = a + b;
    }
};

class demo4:  public demo3 {
public:
    int c;
    void getdata3() 
    {
        cout << "Enter value of c: ";
        cin >> c;
    }

    void display() {
        cout << "Addition of a and b  is: " << d << endl;
        cout << "Value of c  is: " << c << endl;
    }
};

int main() {
    demo4 d;
    d.getdata1();  
    d.getdata2();  
    d.getdata3(); 
    d.getadd();    
    d.display();  
    return 0;
}