#include <iostream>

int main() {

    std::cout << "Use the address-of operator '&' before a varible to get hexadecimal location in memory prefix argument name in function declareation with address of operator to accept memory addresses instead so instead of new varibles being created in the function scope it edits and accesses the varibles in the scope you called it from\n";

    std::string testString2 = "STRING"; // Make a string

    std::string *pTestStrint2 = &testString2; // Create a pointer (they are variables that contain the memory address for another variable), if not setting a pointer immediatly you should make it a null pointer by doing this "std::string *pointer = nullptr;" or "std::string *pointer = NULL;"

    std::cout << *pTestStrint2 << '\n'; // Outputs "STRING" not the memory address because we used the dereference oper ator '*' it is common to prefix a pointer with 'p'

    return 0;

}
