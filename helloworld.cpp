// Including dependencies
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

// Createing a namespace
namespace example {
    int test = 21;
}

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

    // "using namespace test" would assume test namespace is default and no need to use "test::expression1"
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
    double q = p / o * 100; // 'z' will be 0
    q = p / (double) o * 100; // 'z' will be 80
    std::cout << q  << '%' << '\n';

    std::string name;
    std::cout << "What is your full name: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "Hello, " << name << " have a good day\n";

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

    if(number >= 10 && number <= 20) { // If number is greater than or equal to 10 and less than or equal to 20
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
    if(!testBool) { // Cecking bool for false use the not ('!') operator
        std::cout << "Bool is false.\n";
    } else {
        std::cout << "Bool is true.\n";
    }

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

    switch(character) { // Same as above but with letters and more cases
        case 'A':
            std::cout << "You entered 'A'n";
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

    // "If number is greater than or equal to 10 then expression1 else expression2" made shorter using the ternary operator
    number >= 10 ? std::cout << "Number is greater than or equal to 10!" << '\n' : std::cout << "Number is less than 10." << '\n';
    //Same as above
    std::cout << (number >= 10 ? "Number is greater than or equal to 10!\n" : "Number is less than 10.\n");

    std::string testString = "abcdefghijklmnopqrstuvwxyz";
    std::cout << testString.length() << '\n'; // Returns the length of a string
    std::cout << testString.empty() << '\n'; // Checks if a string is empty, returns a bool
    std::cout << testString.append("string") << '\n'; // Appends a string to the end of another
    std::cout << testString.at(0) << '\n'; // Returns the character at a given position (starting st 0)
    testString.insert(0, "string"); // Inserts a character at the begining of a given position
    std::cout << testString.find('a') << '\n'; // Returns the position of the first instance found of a character
    testString.erase(0, 5); // Clears a selection from a starting point (0) and a ending point (5)
    testString.clear(); // Clears the string

    int testInt = 0;
    while(testInt < 10) { // Will run an expression while a condition is met condition
        std::cout << testInt << '\n';
        testInt++;
    }

    testInt = 0;
    do { // Does a expression then runs again if a condition is met
        std::cout << testInt << '\n';
        testInt++;
    } while(testInt < 10);

    for(int i = 0; i < 10; i++) { // Declare a variable then state a condition (like a while loop) finaly increment 'i' by one
        std::cout << i << '\n';
    }

    // "break;" end loop
    // "continue;" skip current loop iteration
    // When nesting loops (putting them in each other) use different index names
    
    srand(time(NULL)); // Set the pseudo-random number generator (RNG) seed to the current time
    int random = rand(); // Make a pseudo-random number
    random = (rand() % 20) + 1; // Pseudo-random number between 1 and 20

    speak(); // Call the "speak" function
    speakName("Test"); // Call the "speakName" function and pass a value to the "name" argument (seperate values with commas)

    std::string testArray[] = {"item1", "item2", "item3"}; // Create array (interger array example: "int intArray[] = {1, 2, 3}" when defining empty arrays array size must be set example: "int array[3]")
    std::cout << testArray << '\n'; // Will return the memory address for the array
    std::cout << testArray[0] << '\n'; // Prints the first item in the array
    testArray[0] = "1meti"; // Change the value of a array element

    for(int i = 0; i < sizeof(testArray) / sizeof(testArray[0]); i++) { // "sizeof" returns the size in bytes of the thing in parenthesis (strings return 32 bytes becaue they are a refrence)
        std::cout << testArray[i] << '\n';
    }

    for(std::string item : testArray) { // For each loop (data type, item name, read from variable) does the same as above
        std::cout << item << '\n';
    }

    int rows = 5;
    int colums = 5;
    int twoDimensionalArray[rows][colums] {{0, 0, 0, 0, 0}, // Create a 2D array
                                            {0, 0, 0, 0, 0},
                                            {0, 0, 0, 0, 0},
                                            {0, 0, 0, 0, 0},
                                            {0, 0, 0, 0, 0}};

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colums; j++) {
            std::cout << twoDimensionalArray[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colums; j++) {
            twoDimensionalArray[i][j] = i + j;
            std::cout << twoDimensionalArray[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';

    return 0; // Returns data (must match function return data type) to where it was called from (if a function returns a interger and you want to store that value do "int returnValue = function(arguments)") return '0' in main means everything went good

}

void speak() { // Declare a function (a piece of code that can be called again and again)
    std::cout << "Hello!\n";
}

void speakName(std::string name) { // Declare a function but add a argument (variable) yhat can be used in the funtion (seperate arguments with commas)
    std::cout << name << '\n';
}

// Functions can share the same name as long as the arguments are dirrerent
// Local variables are variables that were declared inside a function, loop etcetera and can't be accessed outside that scope (local variables are priority), global varaibles are declared outside functions and can be accessed everywere (use the scope resolution operator "::" before variable name to choose global variable)
// When passing arrays it will become a pointer which means that "sizeof" will not work on it
// "fill(beginingArrayIndex, endArrayIndex, valueToFillWith)"
