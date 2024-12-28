//Q.Hierarchial inheritence:

#include <iostream>
using namespace std;
class base1
{
    public:
    int a;
    void getdata1()
    {
        cout<<"enter number: ";
        cin>>a;
        cout<<"value for a"<<a;
    }
};
class base2:public base1
{
    public:
    int b;
    void getdata2()
    {
        cout<<"enter number: ";
        cin>>b;
        cout<<"value for b"<<b;
    }
};

class hbase: public base1
{

};

int main()
{
    base2 b;
hbase h;
    b.getdata1();
    b.getdata2();
    h.getdata1();
}
