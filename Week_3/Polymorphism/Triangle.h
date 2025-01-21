#ifndef TRIANGLE_H
#define TRIANGLE_H
#define _USE_MATH_DEFINES

#include "Abstract_Shape.h"
#include <cmath>

/*
* Another derived class!
*/

class Triangle : public Shape{
    float sideA;
    float sideB;
    float sideC; // Calculated side to the triangle
public:
    Triangle();
    Triangle(float, float);
    Triangle(Triangle&);

	~Triangle();

    float getA() const;
    float getB() const;
    float getC() const;

    void setA(float);
    void setB(float);

    float parameter() const override;
    float area() const override;
};

#endif