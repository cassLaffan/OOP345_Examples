#include <iostream>
// Some useful inclusions you've seen (and not seen) before
#include <string>
#include <string_view>

int main() {
	std::string str = "Hello,";
	// Add a null byte
	str += '\0';
	// Add more text
	str += " World!";

	// Create a view
	std::string_view view(str); 
	std::cout << view << std::endl;

	return 0;
}

