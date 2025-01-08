//2. Searching: Linear Search

#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (size_t i = 0; i < arr.size(); i++) {
        if (arr[i] == target) return i;
    }
    return -1; // Element not found
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};
    int target = 30;
    int result = linearSearch(arr, target);

    if (result != -1) cout << "Element found at index " << result << endl;
    else cout << "Element not found." << endl;

    return 0;
}
