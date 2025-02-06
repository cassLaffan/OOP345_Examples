#include <iostream>

/*
* In this file, we take a look at throwing exceptions! This way,
* our code doesn't outright break but instead stops in a place
* that's clean.
*/

// So here I have a function which attempts to divide and change
// the item at index i. If i is out of range, then it will
// throw an error. Same with if I try to divide by 0!
void divide(double a[], int i, int n, double divisor) {
	if (i < 0 || i >= n)
		throw "Index out of bounds!";

	if (divisor == 0)
		throw "Division by zero!";

	a[i] = i / divisor;  
}

int main(){
	int divisor = 0;
	double arr[] = {3.4, 2.2, 7.9, 200.3};

	try {
		divide(arr, 3, 4, divisor);  
	} catch (const char* msg) {
		std::cout << msg << std::endl;  
	}

	char* p = nullptr;
	try {
		p = new char[1000000000000000]; // Throws bad alloc!
	} catch (std::bad_alloc& e) {
		std::cout << "AHHHHH\n" << std::endl;
		abort();
	}  

	return 0;
}