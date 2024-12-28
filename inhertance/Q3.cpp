//Q. Multiple inheritence:

#include <iostream>
using namespace std;
class base1
{
    public:
    int a;
    void getdata1()
    {
        cout<<"enter number:";
        cin>>a;
        cout<<"value for a"<<a;
    }
};
class base2
{
    public:
    int b;
    void getdata2()
    {
        cout<<"enter number:";
        cin>>b;
        cout<<"value for b"<<b;
    }
};

class derived: public base1,public base2
{
    public:
    int c;
    void adddisplay()
    {
        c=a+b;
        cout<<"addition of a and b is:"<<c;
    }
};
int main()
{
    derived d;
    d.getdata1();
    d.getdata2();
    d.adddisplay();
}
