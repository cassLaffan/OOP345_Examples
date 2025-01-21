#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES

#include "Abstract_Shape.h"
#include <cmath>

/*
* A non-abstract implementation which inherits from the abstract base
* class. yay, polymorphism!
*/

class Circle : public Shape{
    float radius;
public:
    Circle();
    Circle(float);
	~Circle();

    float getRadius() const;
    void setRadius(float);

    float parameter() const override;
    float area() const override;
};

#endif