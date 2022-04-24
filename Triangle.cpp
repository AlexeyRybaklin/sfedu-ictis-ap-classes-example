//
// Created by elpil on 23.04.2022.
//

#include "Triangle.h"
#include <iostream>

Triangle::Triangle(int a, int b, int c) : Figure(convertLengthsToPoints(a, b, c), 3)
{

}

Triangle::~Triangle()
{
	std::cout << "I am destructor \n";
}

Point** Triangle::convertLengthsToPoints(int a, int b, int c)
{
	Point** point = new Point *[3];
	point[0] = new Point(a, 0);
	point[1] = new Point(a, b);
	point[2] = new Point(b, c);

	return point;
}


int Triangle::perimeter()
{
	std::cout << "Figure Implementation perimeter" << std::endl;
	double val = 0;
	if (points == nullptr || numberOfPoints == 0) {
		return 0;
	}
	for (int i = 0; i < this->numberOfPoints - 1; i++) {
		val += this->points[i]->distance(this->points[i + 1]);
	}
	val += this->points[this->numberOfPoints - 1]->distance(this->points[0]);
	return (int) val;
}

int Triangle::area()
{
	std::cout << "Rectangle Implementation area" << std::endl;
	return (int)(this->points[0]->distance(this->points[1]) * this->points[1]->distance(this->points[2]));
}