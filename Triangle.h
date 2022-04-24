//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_TRIANGLE_H
#define CLASSES_TRIANGLE_H

#include "Figure.h"

/**
 * TODO extend this Class from Figure class and Implement constructor, destructor,  perimeter and area methods in Triangle.cpp file
 */
class Triangle : public Figure {
//TODO put your code here
//you should define methods and constructor/destructor prototypes here and implement them in Triangle.cpp file
//constructor must use the pointers to 3 apexes of the triangle.
private:
	Point** po;

public:

	Triangle(Point *a, Point *b, Point *c);
	~Triangle();


	int perimeter() override;
	int area() override;
};


#endif //CLASSES_TRIANGLE_H
