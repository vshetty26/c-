//Q3.to check wheather file exists or not

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("noexistfile.txt");
    if (!fin)
    {
        cout << "File doesn't exit" << endl;
        
    }

    string name;
    getline(fin, name);
    cout << name;
    fin.close();
    return 0;
} 

