#include <iostream>

int main() {

    // Comment
    
    /*
    Multi-line Comment
    */

    // Interger (whole number)
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
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << '\n';
    return 0;
}
