#include <iostream>

int main() {

    srand(time(NULL)); // Set the pseudo-random number generator (RNG) seed to the current time
    int random = rand(); // Make a pseudo-random number
    std::cout << random << '\n';
    random = (rand() % 20) + 1; // Pseudo-random number between 1 and 20
    std::cout << random << '\n';   

    return 0;

}
