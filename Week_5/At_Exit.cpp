#include <iostream>

/*
* In this file, we're just gonna look at the basic at exit
* functionalities. 
*/

void cleanup() {
	std::cout << "Cleaning up!" << std::endl;
}  

// Notice that I don't return 0 here?
int main() {  
	std::atexit(cleanup);  
	std::exit(0);  
}  