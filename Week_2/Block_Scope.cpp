/*
* This is a modified example from the notes. It demonstrates
* some new features of C++17 and some scope features. Notice
* How we can redefine j?
*
* Note: for those getting warnings about versioning from this code,
* add -std=c++17 after g++ when compiling.
*/

#include <iostream>

int main()
{
    int i;
    std::cout << "Enter i: ";
    std::cin >> i;

	// Introduces the variable j within the condition itself
	// which is a feature new to C++17! 
    if (int j = i % 10; j < 5){ // a feature of C++17
        i -= j;      // round down
    }
    else{
        // Notice we can call on j here? 
        i += 10 - j; // round up
    }
    std::cout << i << std::endl;
    // But not here! Uncomment the following line and see
    // how the code breaks.
    //std::cout << j << std::endl;

    std::cout << "Enter i: ";
    std::cin >> i;
    switch (int j = i % 10; j / 5){ // a feature of C++17
    	case 0: // round down
			i -= j;
			break;
		case 1: // round up
			i += 10 - j;
			break;
		default:
			std::cout << "Default" << std::endl;
    }
    std::cout << i << std::endl;
	// Try uncommenting the following line!
	// std::cout << j << std::endl;

	return 0;
}