#include "Template_Class.h"
#include "Template_Functions.h"

int main() {
	// Functions from the Template_Functions file
	int result_one = multiply(3, 4);  // T = int
	std::cout << "Multiplying ints: " << result_one << std::endl;
	double result_two = multiply(3.5, 2.1);  // T = double
	std::cout << "Multiplying floats: " << result_two << std::endl;
	int result_three = max(3, 4);  // T = int
	std::cout << "The max of ints: " << result_three << std::endl;
	double result_four = max(3.5, 2.1);  // T = double
	std::cout << "The max of floats: " << result_four << std::endl;

	int add_result = add(7, 3); // T = int
	std::cout << "Adding ints: " << add_result << std::endl;
	const char* char_result = add("Hello, ", "world!");
	std::cout << "Adding strings: " << char_result << std::endl;

	// Functionalities from our template classes!
	// Arrays with specific sizes
	Array<int, 5> intArr;
	std::cout << "The size of our first array is: " << intArr.getSize() << std::endl;
	Array<double, 3> dblArr;
	std::cout << "The size of our second array is: " << dblArr.getSize() << std::endl;

	Wrapper<Container, int> wrapper;
	wrapper.container.data = 10;

	Counter<int> c1;
	Counter<int> c2;
	std::cout << "Count: " << Counter<int>::count << std::endl;  // Output: Count: 2
}