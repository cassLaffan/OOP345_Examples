#include <iostream>
/*
* In this file, we're looking at an example of composition!
* Remember, composition is a "has-a" relationship. A car 
* has an engine!
*/

class Engine {
public:
	void start(){
		std::cout << "Engine started!" << std::endl;
	}
};

class Car {
	// Car HAS an Engine
	Engine engine;
	std::string brand;
public:
	Car(std::string b){
		brand = b;
	}

	void start(){
		engine.start();
		std::cout << "Vroom vroom!" << std::endl;
    }
};

int main(){
	Car myCar("Toyota");
	// Note the output
	myCar.start();
	return 0;
}