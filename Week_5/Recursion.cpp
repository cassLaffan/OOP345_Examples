// Recursive Functions
// fibonacci.cpp

#include <iostream>

unsigned factorial(unsigned x){
	//2u is an unsigned int with the value of 2
    return (x > 2u) ? x * factorial(x - 1) : x;
}

int main (){
    std::cout << "2! = " << factorial(2) << std::endl;
    std::cout << "3! = " << factorial(3) << std::endl;
    std::cout << "4! = " << factorial(4) << std::endl;

	return 0;
}