#include <iostream>

int main(){
	int x = 10;
	auto addX = [x](int y) { return x + y; };
	std::cout << addX(5); // Output: 15
	// Capture lists
	int a = 1, b = 2;
	auto lambda = [a, &b]() { b = a + b; };
	lambda();
	std::cout << b << std::endl; // Output: 3

	return 0;
}