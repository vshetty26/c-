//Q3. Custom Exception Class

#include <iostream>
#include <exception>

class MyException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred!";
    }
};

int main() {
    try {
        throw MyException();
    } catch (const MyException &e) {
        std::cerr << "Caught MyException: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught an unknown exception." << std::endl;
    }
    return 0;
}
