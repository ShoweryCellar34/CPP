#include <iostream>

int main() {

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    // Only ever one set of instructions in the following statment will ever run
    if(number >= 10) { // If number is greater or equal to variable than then do expression
        std::cout << "Number is greater than or equal to 10!\n";
    } else if(number < 0) { // If nothing happend and number is less than variable than do expression1
        std::cout << "Positive values only.\n";
    } else { // If noting was triggered than do expression
        std::cout << "Number is less than 10.\n";
    }

    if(number > 10 && number < 20) { // If number is greater than or equal to 10 and less than or equal to 20
        std::cout << "Number is between 10 and 20.\n";
    } else {
        std::cout << "Number is not between 10 and 20.\n";
    }
    if(number <= 10 || number >= 20) { // The same as abover but using the "or" operator
        std::cout << "Number is not between 10 and 20.\n";
    } else {
        std::cout << "Number is between 10 and 20.\n";
    }

    bool testBool = true;

    if(testBool) { // Checking bool for true no need for "== true"
        std::cout << "Bool is true.\n";
    } else {
        std::cout << "Bool is false.\n";
    }
    if(!testBool) { // Checking bool for false use the not ('!') operator
        std::cout << "Bool is false.\n";
    } else {
        std::cout << "Bool is true.\n";
    }

}
