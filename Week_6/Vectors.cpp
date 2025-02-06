#include <vector>
#include <iostream>

/*
* Let's look at vectors! Essentially, they're resizable arrays!
*/

int main() {
	std::vector<int> nums = {1, 2, 3};
	// Add 4 to the end
	nums.push_back(4);
	// Remove the last element
	nums.pop_back();

	for (int num : nums) {
		std::cout << num << " "; // Output: 1 2 3
    }
	
	std::cout << std::endl;

	return 0;
}