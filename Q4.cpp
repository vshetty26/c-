//Q4.How to use read and write together 


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename="demo3.txt";
    fstream my_file(filename,ios::in | ios::out);
    if(!my_file){
        cout<<"Error";
        return 1;
    }
    my_file <<"This is a new line of text.\n";
    my_file.close();
    ifstream readFile(filename);
    if (!readFile.is_open()){
        cout<<"file is not found"<<endl;
        return 1;
    }
    string line;
    cout << "File contents:" <<std :: endl;
    while (getline(readFile,line)) {
        cout << line <<endl;
    }
    readFile.close();
    return 0;
}


