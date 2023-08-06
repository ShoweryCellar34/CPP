#include <iostream>

// Createing a namespace
namespace example {
    int test = 21;
}

int main() {

    // "using namespace test" would assume test namespace is default and no need to use "test::expression1"
    int test = 20;
    std::cout << test << ' ' << example::test << '\n';
    test++; // "test = test + 1"
    std::cout << test << ' ' << example::test << '\n';
    test--; // "test = test - 1"
    std::cout << test << ' ' << example::test << '\n';

    return 0;

}
