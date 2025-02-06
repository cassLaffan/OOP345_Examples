#include <vector>
#include <iostream>

/*
* Let's take a look at iterators! These are objects that
* allow you to navigate containers. They provide a uniform
* way to access elements!
*/

int main() {
    std::vector<int> nums = {1, 2, 3};
	// Spawn the iterator
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        std::cout << *it << " ";
	}

	std::cout << std::endl;

	auto it = nums.begin();
	// Move to the second element
	++it;
    nums.insert(it, 10); // Insert 10 before 2

	return 0;
}