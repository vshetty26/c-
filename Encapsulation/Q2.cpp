//Q2. Public: Accessible Everywhere

#include <iostream>
using namespace std;

class PublicExample {
public:
    int publicData;  // Accessible from anywhere
};

int main() {
    PublicExample obj;
    obj.publicData = 42;  // Direct access
    cout << "Public Data: " << obj.publicData << endl;

    return 0;
}
