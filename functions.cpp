#include <iostream>

void speak() { // Declare a function (a piece of code that can be called again and again)
    std::cout << "Hello!\n";
}

void speakName(std::string name) { // Declare a function but add a argument (variable) yhat can be used in the funtion (seperate arguments with commas) constants can be used in argument declareation
    std::cout << name << '\n';
}

int main() {

    speak(); // Call the "speak" function
    speakName("Test"); // Call the "speakName" function and pass a value to the "name" argument (seperate values with commas)

    return 0;

}

// Functions can share the same name as long as the arguments are dirrerent, these are called overloaded functions
