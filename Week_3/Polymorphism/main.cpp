#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

int main(){
	// Now, we can have a concrete version of this class, not taking advantage of polymorphism...
	Circle circleOne(4.2);
	std::cout << "The area of the circle is: " << circleOne.area() << std::endl;
	std::cout << "The parameter of the circle is: " << circleOne.parameter() << std::endl;

	// Or we can have a chameleon object!
	Shape* aShape;
	aShape = new Square(2.2, 2.5);
	std::cout << "The area of our generic shape is: " << aShape->area() << std::endl;
	std::cout << "The parameter of the generic is: " << aShape->parameter() << std::endl;

	// Freeing the memory
	delete aShape;

	aShape = new Circle(3.4);
	std::cout << "The area of our generic shape is: " << aShape->area() << std::endl;
	std::cout << "The parameter of the generic shape is: " << aShape->parameter() <<std::endl;

	// Freeing the memory again
	delete aShape;

	aShape = new Triangle(2.2, 4.5);
	std::cout << "The area of our third generic shape is: " << aShape->area() << std::endl;
	std::cout << "The parameter of the third generic shape is: " << aShape->parameter() <<std::endl;

	delete aShape;
}