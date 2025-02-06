#include <stack>
#include <iostream>

/*
* This is a stack! Stacks are like stacks of plates: you put
* the newest plate on top and then take the latest one off the
* top too.
*/

int main() {
	std::stack<int> s;
	// Add 1
	s.push(1);
	// Add 2
	s.push(2);
	// Remove 2
	s.pop();

	std::cout << s.top() << std::endl; // Output: 1

	return 0;
}