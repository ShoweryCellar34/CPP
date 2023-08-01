#include <iostream>
#include <cmath>

// Createing a namespace
namespace test {
    int test = 21;
}

int main() {

    // Comment
    
    /*
    Multi-line Comment

    "typedef std::string nickname_t;" will allow access to std::string through nickname_t, _t is common to put when using typedef
    "using nickname_t = std::string;" is more common and popular
    should only use when clear benefit

    Math operators: + - * /
    "test += 1" increment by one
    "test -= 1" decrement by one
    "test *= 2" multiply by one
    "test /= 2" divide by one
    Order of calculation:
        First: Parenthesis (Bedmas)
        Second: Multiplication and Division
        Third: Addition and Subtraction
    Useful math functions:
        Max and Min:
            double x = 3;
            double y = 4;
            double z;
            z = std::max(x, y); returns the bigger number of the selection
            z = std::min(x, y); returns the smaller number of the selection
        the rest need "#include <cmath>"
        Power, Square root, absolute, rounding:
        */
            double z = pow(2, 4); // returns '16'
            z = sqrt(9); // returns '3'
            z = abs(-4); // returns '4'
            z = round(3.14); // returns 3
            z = ceil(3.14); // returns 4
            z = floor(3.14); /* returns 3

    Type conversion:
        double x = (int) 3.14; 'x' will equal 3
        int x = (double) 3.14; 'x' will equal 3
        char x = 100; 'x' equals 'd' because the decimal representation of 'd' is 100 
        std::cout << (char) 100; will print 'd'
        */

    // Interger (whole number)
    int test = 20;
    int a = 5;
    int sum = a + 6;

    // Double (decimal point)
    double b = 1.5;
    double sum2 = b + 2.5;

    // Single character
    char c = 'A';

    // Boolean (true of false)
    bool d = true;

    // String (can store a sequence of text)
    std::string e = "ABC123!@#";

    // '\n' is to start a new line
    std::cout << sum << '\n';
    std::cout << "Hello World!" << '\n';
    std::cout << "Ok, I'm tired, go away world." << '\n';

    // Const make varible, works with int, double, char, bool, string
    const double PI = 3.14159265359;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << '\n';

    // "using namespace test" would assume test namespace is default and no need to use "test::"
    std::cout << test << ' ' << test::test << '\n';
    test++; // "test = test + 1"
    std::cout << test << ' ' << test::test << '\n';
    test--; // "test = test - 1"
    std::cout << test << ' ' << test::test << '\n';

    int remainder = 20 % 3; // Get the remainder of 20 / 3 using the modulus operator
    std::cout << remainder << '\n';

    int x = 10;
    int y = 8;
    double z = x / y * 100; // 'z' will be 0
    z = x / (double) y * 100; // 'z' will be 80
    std::cout << z  << '%' << '\n';

    std::string name;
    std::cout << "What is your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello, " << name << " how do you do" << '\n';

    int number;
    std::cout << "Enter number: ";
    std::cin >> number;

    if(number >= 10) {
        std::cout << "Number is greater than or equal to 10!" << '\n';
    } else if(number < 0) {
        std::cout << "Positive values only." << '\n';
    } else {
        std::cout << "Number is less than 10." << '\n';
    }
    return 0;

    switch(number) {
    case 1:
        std::cout << "Number is 1!" << '\n';
        break;
    case 10:
        std::cout << "Number is equal to 10!" << '\n';
        break;
    }

}
