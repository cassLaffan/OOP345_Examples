#include <iostream>

/*
* This file has constant expressions, which are evaluated at compile time!
* This saves on resources and makes your program faster at runtime.
* This is another file that needs -std=c++17 in the compile command to run.
*/

// A constexpr variable
constexpr int N = 8;

// a constexpr function
constexpr int factorial(int i) { 
    return i > 1 ? i * factorial(i - 1) : 1;
}

int main() {
    std::cout << N << "! = " << factorial(N) << std::endl;
}
