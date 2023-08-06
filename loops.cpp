#include <iostream>

int main() {

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

    return 0;

}
