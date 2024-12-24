// Q.2 Swapping two variables without using other variable

#include<iostream>
using namespace std;
int main() {            

    int x=4;
    int y=10;
    x= x+y;
    y=x-y;
    x=x-y;
    cout << "x:" << x << ",y: " << y<< endl;
    return 0;

}