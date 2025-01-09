/*
* An example of shadowing from the notes. Notice how we can
* redefine i in the inner scope and it works? It just prioritizes
* the inner scope's definition.
*/

#include <iostream>

int main()
{
    int i;
    std::cout << "Enter i: ";
    std::cin >> i;
    if (i < 0){
		int i = 4;  // shadows the outer i
		std::cout << "Shadowing inner i: " << i << std::endl;
    }
    else{
		int i = -4; // shadows the outer i
		std::cout << "Shadowing inner i: " << i << std::endl;
    }
    std::cout << "Shadowed outer i: " << i << std::endl;
}