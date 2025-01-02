//Q2. Catching Multiple Exceptions

#include <iostream>
#include <stdexcept>

void checkNumber(int num) {
    if (num < 0) {
        throw std::out_of_range("Negative number not allowed.");
    } else if (num == 0) {
        throw std::logic_error("Zero is not a valid input.");
    }
}

int main() {
    try {
        checkNumber(-5);  // Change input to test different exceptions.
    } catch (const std::out_of_range &e) {
        std::cerr << "Out of Range Exception: " << e.what() << std::endl;
    } catch (const std::logic_error &e) {
        std::cerr << "Logic Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unknown exception occurred." << std::endl;
    }
    return 0;
}

