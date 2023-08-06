// Including dependencies
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

void speak(); // Pre-declare a function because the function was declared after where it was called
void speakName(std::string name);

int main() { // When declaring a function and returning data function name must be following the return data type

    // Comment

    /*
    Multi-line Comment
    */

    typedef std::string nickname_t; // will allow access to std::string through nickname_t, _t is common to put when using typedef
    using nickname_t = std::string; // is more common and popular
    //should only use when clear benefit

    //Math operators: + - * /
    int variable;
    variable += 1; // increment by one
    variable -= 1; // decrement by one
    variable *= 2; // multiply by one
    variable /= 2; // divide by one

    //Order of calculation:
    //First: Parenthesis (Bedmas)
    //Second: Multiplication and Division
    //Third: Addition and Subtraction

    //Max and Min:
    int a = 3;
    int b = 4;
    int c;
    c = std::max(a, b); // returns the bigger number of the selection
    c = std::min(a, b); // returns the smaller number of the selection

    //the rest need "#include <cmath>"
    //Power, Square root, absolute, rounding:
    double d = pow(2, 4); // returns '16'
    d = sqrt(9); // returns '3'
    d = abs(-4); // returns '4'
    d = round(3.14); // returns 3
    d = ceil(3.14); // returns 4 (rounds up)
    d = floor(3.14); // returns 3 (rounds down)

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
    std::cout << "Ok, I'm tired, go away world.\n";

    // Type conversion:
    double l = (int) 3.14; // 'l' will equal 3
    int m = (double) 3.14; // 'm' will equal 3
    char n = 100; // 'n' equals 'd' because the decimal representation of 'd' is 100 
    std::cout << (char) 100 << '\n'; // will print 'd'

    // Const make variable, works with int, double, char, bool, string
    const double PI = 3.14159265359;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << '\n';

    int remainder = 20 % 3; // Get the remainder of 20 / 3 using the modulus operator
    std::cout << remainder << '\n';

    int o = 10;
    int p = 8;
    double q = p / o * 100; // 'z' will be 0
    q = p / (double) o * 100; // 'z' will be 80
    std::cout << q  << '%' << '\n';

    int number;
    std::cout << "Enter number: ";
    std::cin >> number; // "std::cin" gets user input but whitespaces seperate enteries

    std::string name;
    std::cout << "What is your full name: ";
    std::getline(std::cin >> std::ws, name); // Gets the entire line and then "std::ws" only gets the user input
    std::cout << "Hello, " << name << " have a good day\n";

    // "break;" end loop
    // "continue;" skip current loop iteration
    // When nesting loops (putting them in each other) use different index names

    return 0; // Returns data (must match function return data type) to where it was called from (if a function returns a interger and you want to store that value do "int returnValue = function(arguments)") return '0' in main means everything went good

}

// Local variables are variables that were declared inside a function, loop etcetera and can't be accessed outside that scope (local variables are priority), global varaibles are declared outside functions and can be accessed everywere (use the scope resolution operator "::" before variable name to choose global variable)
