#include <iostream>

int main() {

    std::string testArray[] = {"item0", "item1", "item2"}; // Create array (integer array example: "int intArray[] = {1, 2, 3}" when declaring empty arrays array size must be set example: "int array[3]")
    std::cout << testArray << '\n'; // Will return the memory address for the array
    std::cout << testArray[0] << '\n'; // Prints the first item in the array
    testArray[0] = "1meti"; // Change the value of a array element

    for(int i = 0; i < sizeof(testArray) / sizeof(testArray[0]); i++) { // "sizeof" returns the size in bytes of the thing in parenthesis (strings return 32 bytes becaue they are a refrence)
        std::cout << testArray[i] << '\n';
    }

    for(std::string item : testArray) { // For each loop (data type, item name, read from variable) does the same as above
        std::cout << item << '\n';
    }

    return 0;

}

// "fill(beginingArrayIndex, endArrayIndex, valueToFillWith)"
// When passing arrays to a function it will become a pointer which means that "sizeof" will not work on it
