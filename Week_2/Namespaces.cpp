#include "Namespaces.h"

namespace dot {
	const char* leader(char* s) {
		for (int i = 0; i < ML; i++) {
			s[i] = '.';  // Fill the string with dots
		}
		s[ML] = '\0';
		return s;
	}
}

namespace hat {
	const char* leader(char* s) {
		for (int i = 0; i < ML; i++) {
			s[i] = '^';  // Fill the string with hats
		}
		s[ML] = '\0';
		return s;
	}
}

// Now in the main we can see why namespaces might come in handy!
// We can call the same function name from different namespaces.
int main(){
	char s[51];

	// Using the function from the dot namespace
	dot::leader(s);
	std::cout << "Dot string: " << s << " Length: " << dot::ML << std::endl;

	// Using the function from the hat namespace
	hat::leader(s);
	std::cout << "Hat string: " << s << " Length: " << hat::ML << std::endl;

	return 0;
}