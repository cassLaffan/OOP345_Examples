#include <iostream>

/*
* Lambdas are anonymous functions that you define in-line! A 
* lot of languages have these. Remember, the auto keyword lets
* C++ detect the type of something for you.
*/

int main(){
	int x = 10;
	// First lambda
	auto addX = [x](int y) { return x + y; };
	std::cout << addX(5); // Output: 15
	// Capture lists
	int a = 1, b = 2;
	// Second lambda, doesn't have to be named lambda
	auto lambda = [a, &b]() { b = a + b; };
	lambda();
	std::cout << b << std::endl; // Output: 3

	return 0;
}