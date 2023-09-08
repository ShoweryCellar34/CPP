#include <iostream>

int main() {

    const int rows = 5;
    const  int colums = 5;

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

    return 0;

}
