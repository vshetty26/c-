//Q1. Private: Access within the Class Only

#include <iostream>
using namespace std;

class PrivateExample {
private:
    int privateData;  // Accessible only within this class

public:
    void setPrivateData(int value) {
        privateData = value;  // Setter for private data
    }

    int getPrivateData() {
        return privateData;  // Getter for private data
    }
};

int main() {
    PrivateExample obj;
    obj.setPrivateData(10);  // Access through public methods
    cout << "Private Data: " << obj.getPrivateData() << endl;

    return 0;
}

