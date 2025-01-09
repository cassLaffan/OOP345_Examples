#include "Creating_Types.h"

int main(){
	// Now you can just invoke it by name!
	constInt a = 5;
	aStruct b = {17};

	std::cout << "The value of our typedef constInt is: " << a << std::endl;
	std::cout << "The value in our typedef aStruct is: " << b.structNum << std::endl;

	return 0;
}