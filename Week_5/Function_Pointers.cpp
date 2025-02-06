#include <iostream>

/*
* In this file we're playing around with function pointers. 
* Remember: functions are stored at addresses too. So, in theory,
* we can pass that address along as arguments!
*/

// Some basic functions to pass along later
bool ascending(int a, int b){
	return a > b;
}

bool descending(int a, int b){
	return a < b;
}


// Here, we actually take a pointer (function pointer)
// as an argument! It allows you to customize runs for functions
void sort(int* arr, int n, bool (*compare)(int, int)) {
    // Use compare to sort the array - laziness prevailed
	// TODO: sort lol
}

int main(){
	int array[] = {10, 44, 19, 0, 99, -10};
	// See? We pass a function to a function!
	sort(array, 6, ascending);

	return 0;
}