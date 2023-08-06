#include <iostream>

int main() {

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    // gets number and "case1 expression" runs if number is equal to variable, if no matching case then run defalt case (not mandatory)
    switch(number) { // 'number' is a variable that is used
    case 1: // If 'number' is 1 then
        std::cout << "Number is 1!\n";
        break;
    case 10: // If 'number' is 10 then
        std::cout << "Number is equal to 10!\n";
        break;
    default: // If no matching case then do default expression
        std::cout << "Number is not equal to 1 or 10.\n";
    }

    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    switch(character) {
        case 'A':
            std::cout << "You entered 'A'\n";
            break;
        case 'a':
            std::cout << "You entered 'a'\n";
            break;
        case 'B':
            std::cout << "You entered 'B'\n";
            break;
        case 'b':
            std::cout << "You entered 'b'\n";
            break;
        case 'C':
            std::cout << "You entered 'c'\n";
            break;
        default:
            std::cout << "You did not enter a A, a, B, b, C or c." << '\n';
    }

    return 0;

}
