//Q3. Template with Multiple Parameters

#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) : first(f), second(s) {}
    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, string> p1(1, "One");
    Pair<double, char> p2(3.14, 'A');

    p1.display();      // First: 1, Second: One
    p2.display();      // First: 3.14, Second: A

    return 0;
}
