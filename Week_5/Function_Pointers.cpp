#include <iostream>

bool ascending(int a, int b) { return a > b; }
bool descending(int a, int b) { return a < b; }

void sort(int* arr, int n, bool (*compare)(int, int)) {
    // Use compare to sort the array
}

int main(){
	int array[] = {10, 44, 19, 0, 99, -10};
	sort(array, 6, ascending);

	return 0;
}