#include "Square.h"
#include "Circle.h"

int main(){
	// Now, we can have a concrete version of this class, not taking advantage of polymorphism...
	Circle circleOne(4.2);
	printf("The area of the circle is: %.2f\n", circleOne.area());
	printf("The parameter of the circle is: %.2f\n", circleOne.parameter());

	// Or we can have a chameleon object!
	Shape* aShape;
	aShape = new Square(2.2, 2.5);
	printf("The area of our generic shape is: %.2f\n", aShape->area());
	printf("The parameter of the circle is: %.2f\n", aShape->parameter());

	// Freeing the memory
	delete aShape;

	aShape = new Circle(3.4);
	printf("The area of our generic shape is: %.2f\n", aShape->area());
	printf("The parameter of the circle is: %.2f\n", aShape->parameter());
}