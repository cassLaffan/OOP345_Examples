#include <iostream>
#include <iomanip> // std::setw

/*
* Just a misc. file containing examples for references, pointers and arrays!
* Note, this is another file that needs you to add -std=c++17
*/

// A hex dump example! Useful for when we want to see addresses.
void hexDump(void* ptr, int n) {
	unsigned char* c = static_cast<unsigned char*>(ptr);
	// Print bytes in hex
	for (int i = 0; i < n; i++)
		std::cout << std::setw(2) << std::hex << static_cast<int>(c[i]) << ' ';
}


int main(){
	// --- typedef pointer examples ---
	// define a new name for type
	typedef unsigned long long int ullint;
	// unsigned long int pointer
	ullint* p;

	// Requires * before every identifier
	//unsigned long long int* p1, *p2;
	// No need for a repeated *!
	ullint* p1, p2;

	// --- Void Pointer examples ---
	void* z; // p can point to any data type
	int x = 5;
	z = &x; // p now holds the address of x
    

	int* j = static_cast<int*>(z); // Now j points to an int

	// --- Reference Examples ---
	int a = 10;
	// ref is an lvalue reference to a
	int& ref = a; 

	// rref is an rvalue reference to the temporary value 5
	int&& rref = 5; 

	// A practical use for rref values
	std::string str1 = "Hello";
	std::string str2 = std::move(str1); // Moves str1’s content to str2

	//--- For Loop with Range ---
	int arr[] = {1, 2, 3, 4};
	for (int x : arr) {
		std::cout << x << " ";
	}

	// The compiler automatically deduces that x is an int!
	// Very useful
	for (auto& x : arr) {
		std::cout << x << " ";
	}

	// --- Array examples ---
	int arrTwo[] = {1, 2, 3};
	int arrThree[10] = {0};

	return 0;
}