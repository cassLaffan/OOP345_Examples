#ifndef SQUARE_H
#define SQUARE_H

#include "Abstract_Shape.h"

/*
* Another derived class.
*/

class Square : public Shape{
    float height;
    float width;
public:
    Square();
    Square(float, float);
	~Square();

    // Notice that I added these functions but also ensured I took
    // out the virtual keyword? This allows us to actually implement
    // these functions.
    float parameter() const;
    float area() const;

};

#endif