#include <iostream>

int main() {

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    // "If number is greater than or equal to 10 then expression1 else expression2" made shorter using the ternary operator
    number >= 10 ? std::cout << "Number is greater than or equal to 10!" << '\n' : std::cout << "Number is less than 10." << '\n';
    //Same as above
    std::cout << (number >= 10 ? "Number is greater than or equal to 10!\n" : "Number is less than 10.\n");

    return 0;

}
