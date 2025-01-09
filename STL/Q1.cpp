//1. Vectors and Iterators

#include <iostream>
#include <vector>

int main() {
    // Declare a vector of integers
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Iterate through the vector using a traditional for loop
    std::cout << "Vector elements: ";
    for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Add and remove elements
    numbers.push_back(60);
    numbers.pop_back();

    std::cout << "Updated vector: ";
    for (std::vector<int>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
