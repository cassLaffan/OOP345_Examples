#include <deque>
#include <iostream>

/*
* Let's look at deques! They're slower than vectors but also
* just as useful!
*/

int main() {
	std::deque<int> d = {1, 2, 3};
	// Add 0 to the front
 	d.push_front(0);
	// Add 4 to the back
	d.push_back(4);

	// Remember our fancy new for loop?
	for (int num : d) {
		std::cout << num << " "; // Output: 0 1 2 3 4
	}

	std::cout << std::endl;

	return 0;
}