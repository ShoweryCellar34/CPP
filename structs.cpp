#include <iostream>

struct test { // Kinda like a custom data type
    std::string string; // Values can be set here as to create defaults so no neec to explicitly set values
    double number;
    bool toggle;
};

int main() {

    test test0;
    test0.string = "STRING0"; // Members can be accessed with '.' (Class Member Access Operator)
    test0.number = 15.63;
    test0.toggle = true;

    test test1;
    test1.string = "STRING1"; // Members can be accessed with '.' (Class Member Access Operator)
    test1.number = 63.15;
    test1.toggle = false;

    std::cout << test0.string << '\n';
    std::cout << test0.number << '\n';
    std::cout << test0.toggle << '\n';

    std::cout << test1.string << '\n';
    std::cout << test1.number << '\n';
    std::cout << test1.toggle << '\n';

    return 0;
}
