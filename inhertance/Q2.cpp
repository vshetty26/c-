//Q. Multilevel inheritence 

#include <iostream>
using namespace std;
class demo1  //base class
{
    public:
    int a;
    void getdata()
    {
        cout<<"enter value of a:";
        cin>>a;
    }
};
class demo2: public demo1
{
    public:
    int c;
    void getsquare()
    {
        c=a*a;
    }

};
class demo3:public demo2
{
    public:
    void display()
    {
        cout<<"square of a is:"<<c;
    }
};
int main()
{
    demo3 d;
    d.getdata();
    d.getsquare();
    d.display();
}
