#include <iostream>
#include <cmath>

// Createing a namespace
namespace example {
    int test = 21;
}

int main() {

    // Comment

    /*
    Multi-line Comment
    */

    typedef std::string nickname_t; // will allow access to std::string through nickname_t, _t is common to put when using typedef
    using nickname_t = std::string; // is more common and popular
    //should only use when clear benefit

    //Math operators: + - * /
    int varible;
    varible += 1; // increment by one
    varible -= 1; // decrement by one
    varible *= 2; // multiply by one
    varible /= 2; // divide by one

    //Order of calculation:
    //First: Parenthesis (Bedmas)
    //Second: Multiplication and Division
    //Third: Addition and Subtraction

    //Max and Min:
    double a = 3;
    double b = 4;
    double c;
    c = std::max(a, b); // returns the bigger number of the selection
    c = std::min(a, b); // returns the smaller number of the selection
        
    //the rest need "#include <cmath>"
    //Power, Square root, absolute, rounding:
    double d = pow(2, 4); // returns '16'
    d = sqrt(9); // returns '3'
    d = abs(-4); // returns '4'
    d = round(3.14); // returns 3
    d = ceil(3.14); // returns 4
    d = floor(3.14); // returns 3

    // Interger (whole number)
    int e = 20;
    int f = 5;
    int sum = e + f;

    // Double (decimal point)
    double g = 1.5;
    double h = 2.5;
    double sum2 = g + h;

    // Single character
    char i = 'A';

    // Boolean (true of false)
    bool j = true;

    // String (can store a sequence of text)
    std::string k = "ABC123!@#";

    // '\n' is to start a new line
    std::cout << sum << '\n';
    std::cout << "Hello World!" << '\n';
    std::cout << "Ok, I'm tired, go away world." << '\n';

    // Type conversion:
    double l = (int) 3.14; // 'l' will equal 3
    int m = (double) 3.14; // 'm' will equal 3
    char n = 100; // 'n' equals 'd' because the decimal representation of 'd' is 100 
    std::cout << (char) 100; // will print 'd'

    // Const make varible, works with int, double, char, bool, string
    const double PI = 3.14159265359;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << '\n';

    // "using namespace test" would assume test namespace is default and no need to use "test::..."
    int test = 20;
    std::cout << test << ' ' << example::test << '\n';
    test++; // "test = test + 1"
    std::cout << test << ' ' << example::test << '\n';
    test--; // "test = test - 1"
    std::cout << test << ' ' << example::test << '\n';

    int remainder = 20 % 3; // Get the remainder of 20 / 3 using the modulus operator
    std::cout << remainder << '\n';

    int o = 10;
    int p = 8;
    double q = o / p * 100; // 'z' will be 0
    q = o / (double) p * 100; // 'z' will be 80
    std::cout << q  << '%' << '\n';

    std::string name;
    std::cout << "What is your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello, " << name << " how do you do" << '\n';

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    // Only ever one set of instructions in the following statment will ever run
    if(number >= 10) { // If number is greater or equal to ... than then do ...
        std::cout << "Number is greater than or equal to 10!" << '\n';
    } else if(number < 0) { // If nothing happend and number is less than ... than do ...
        std::cout << "Positive values only." << '\n';
    } else { // If noting was triggered than do ...
        std::cout << "Number is less than 10." << '\n';
    }

    // gets a varible and "case ..." segments runs if number is equal to ..., if no matching case then run defalt case (not mandatory)
    switch(number) { // 'number' is a varible that is used
    case 1: // If 'number' is 1 then
        std::cout << "Number is 1!" << '\n';
        break;
    case 10: // If 'number' is 10 then
        std::cout << "Number is equal to 10!" << '\n';
        break;
    default: // If no matching case then do ...
        std::cout << "Number is not equal to 1 or 10." << '\n';
    }

    char character;
    std::cout << "Enter a character: ";
    std::cin >> character;

    switch(character) { // Same as above but with letters and more cases
        case 'A':
            std::cout << "You entered 'A'" << '\n';
            break;
        case 'a':
            std::cout << "You entered 'a'" << '\n';
            break;
        case 'B':
            std::cout << "You entered 'B'" << '\n';
            break;
        case 'b':
            std::cout << "You entered 'b'" << '\n';
            break;
        case 'C':
            std::cout << "You entered 'c'" << '\n';
            break;
        default:
            std::cout << "You did not enter a A, a, B, b, C or c." << '\n';
    }

    return 0;

}
