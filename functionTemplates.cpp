#include <iostream>

namespace test
{
    template <typename T> // Define 'T'
    T maxOne(T x, T y)
    { // Changes data type to anything BUT 'T' can only be one thing for each function call, can accept one data type, returns type 'T'
        return (x > y) ? x : y;
    }

    template <typename T, typename U> // Define 'T' and 'U'
    T maxTwo(T x, U y)
    { // Changes data type to anything BUT 'T' and 'U'can oly be one thing for each function call, can accept two data types, returns type 'T'
        return (x > y) ? x : y;
    }

    template <typename T, typename U> // Define 'T' and 'U'
    auto maxThree(T x, U y)
    { // Changes data type to anything BUT 'T' and 'U'can oly be one thing for each function call, can accept two data types, automatically returns the right type
        return (x > y) ? x : y;
    }
}

int main()
{

    std::cout << test::maxOne(1, 2) << '\n';        // Will return 2
    std::cout << test::maxOne(1.1, 2.2) << '\n';    // Will return 2.2
    std::cout << test::maxTwo(1, 2.2) << '\n';   // Will return 2
    std::cout << test::maxThree(1, 2.2) << '\n'; // Will return 2.2

    return 0;
}
