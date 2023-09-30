#include <iostream>

int main() {

    std::string testString = "abcdefghijklmnopqrstuvwxyz";
    std::cout << testString.length() << '\n'; // Returns the length of a string
    std::cout << testString.empty() << '\n'; // Checks if a string is empty, returns a bool
    std::cout << testString.append("string") << '\n'; // Appends a string to the end of another
    std::cout << testString.at(0) << '\n'; // Returns the character at a given position (starting st 0)
    testString.insert(0, "string"); // Inserts a character at the begining of a given position
    std::cout << testString.find('a') << '\n'; // Returns the position of the first instance found of a character
    testString.erase(0, 5); // Clears a selection from a starting point (0) and a ending point (5)
    testString.clear(); // Clears the string

    return 0;
}

// "toupper(...)" convert to uppercase
// "tolower(...)" convert to lowercase
