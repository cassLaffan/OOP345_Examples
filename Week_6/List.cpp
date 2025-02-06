#include <list>
#include <iostream>

/*
* This is the list class! It acts as a doubly linked list.
* This means that every neighbour knows who is behind them and
* in front of them.
*/

int main() {
	std::list<int> l = {1, 2, 3};
	// Add 0 to the front
	l.push_front(0); 
	// Add 4 to the back
	l.push_back(4);

	for (int num : l) {
		std::cout << num << " "; // Output: 0 1 2 3 4
	}

	std::cout << std::endl;

	return 0;
}