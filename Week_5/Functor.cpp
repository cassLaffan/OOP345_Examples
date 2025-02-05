#include <iostream>

class Adder {
    int value;
public:
    Adder(int v) : value(v) {}
    int operator()(int x){
		return x + value;
	}
};

int main(){
	Adder addFive(5);
	std::cout << addFive(10) << std::endl; // Output: 15
	return 0;
}
