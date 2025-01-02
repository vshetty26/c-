//Q1. Basic Exception Handling

#include <iostream>
#include <stdexcept>

int main() {
    try {
        int a = 10, b = 0;
        if (b == 0) {
            throw std::runtime_error("Division by zero error!");
        }
        std::cout << "Result: " << a / b << std::endl;
    } catch (const std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}

