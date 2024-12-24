// Q.1 Swapping two variables

#include<iostream>
using namespace std;
int main() {
    int x=4;
    int y=8;
    int temp=x;
    x=y;
    y=temp;
    cout << "x:" << x << "y:"<< y << endl;
    return 0;
}
