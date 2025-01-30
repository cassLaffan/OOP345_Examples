#include <iostream>
/*
* This file shows a unidirectional association! Remember,
* with a uni-directional association, one class knows about
* the other, but not vice versa.
*/

class Car {
public:
	// Lazy empty constructor
	Car(){}

	void drive(){
		std::cout << "Driving..." << std::endl;
	}
};

class Driver {
	// Driver HAS a Car (uni-directional)
	Car* car;
public:
	// Another cheeky constructor
	Driver(Car* c) : car(c) {}

	void goForDrive() {
		car->drive();
		std::cout << "Driver is on the move!" << std::endl;
    }
};

int main(){
	Car aCar;
	Driver aDriver(&aCar);

	aDriver.goForDrive();

	return 0;
}