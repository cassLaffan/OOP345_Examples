#include <iostream>

/*
* Some basic syntax for multiple inheritance!
*/

class Car {
public:
	void drive() {
		std::cout << "Driving the car" << std::endl;
	}
};

class Aircraft {
public:
	void fly() {
		std::cout << "Flying the aircraft" << std::endl;
	}
};

class FlyingCar : public Car, public Aircraft {
public:
	void fly() {
		std::cout << "Flying and driving, dangerously" << std::endl;
	}
};