#include <iostream>
/*
* In this file, we're taking a basic look at aggregation. 
* Aggregation has a weaker "has-a" relationship than composition.
* The teacher can exist without the school, the engine doesn't
* really work without the car!
*/

class Teacher {
	std::string name;
public:
	Teacher(std::string n){
		name = n;
	}

	void teach() {
		std::cout << "Teaching..." << std::endl;
	}
};

class School {
	// School HAS a Teacher (aggregation)
	Teacher* teacher; 
public:
	// Cheeky shorthand constructor
	School(Teacher* t) : teacher(t) {}

	void startClass() {
		teacher->teach();
		std::cout << "Class is in session!" << std::endl;
    }
};

int main(){
	Teacher me("Cassandra");
	School seneca(&me);

	seneca.startClass();

	return 0;
}