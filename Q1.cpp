//Q.public (single inheritance)

#include <iostream>
using namespace std;
class demo1
{
    public:
    int a;
    void getdata()
    {
        cout<<"enter number:";
        cin>>a;
    }
};
class demo2: public demo1
{
    public:
    void display()
    {
        getdata();
        cout<<"value of a is "<<a;
    }

};
int main()
{
    demo2 d;
    d.display();
    return 0;
}
