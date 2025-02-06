#include <iostream>
#include <variant>
/*
* Let's look at how we can have a type that varies! It can be
* an int or a double!
*/

int main() {
	// Can hold int or double
	std::variant<int, double> v = 42;
	std::cout << std::get<int>(v) << std::endl; 

	// Now it holds a double
	v = 3.14;
	std::cout << std::get<double>(v) << std::endl;

	return 0;
}