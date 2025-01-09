//2. Sets

#include <iostream>
#include <set>

int main() {
    // Declare a set of integers
    std::set<int> uniqueNumbers;
    uniqueNumbers.insert(5);
    uniqueNumbers.insert(10);
    uniqueNumbers.insert(15);
    uniqueNumbers.insert(20);
    uniqueNumbers.insert(10); // Duplicate, will not be added

    // Iterate through the set using an iterator
    std::cout << "Set elements: ";
    for (std::set<int>::iterator it = uniqueNumbers.begin(); it != uniqueNumbers.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Check if an element exists
    int searchValue = 15;
    if (uniqueNumbers.find(searchValue) != uniqueNumbers.end()) {
        std::cout << searchValue << " is in the set." << std::endl;
    } else {
        std::cout << searchValue << " is not in the set." << std::endl;
    }

    return 0;
}
