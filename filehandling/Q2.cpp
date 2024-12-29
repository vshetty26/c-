//Q2. File to read

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream fin ("demo.txt");
    string str_name;
    while(!fin.eof())
    getline(fin,str_name);
    cout<<str_name;
    fin.close();
    return 0;

}
