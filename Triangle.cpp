//
// Created by elpil on 23.04.2022.
//

#include "Triangle.h"
#include <iostream>

Triangle::Triangle(Point* p1, Point* p2, Point* p3) : Figure(new Point* [3]{ new Point(p1->getX() , p1->getY()) , new Point(p2->getX() , p2->getY()) , new Point(p3->getX() , p3->getY()) }, 3)
{
	po = Figure::points;
}

Triangle::~Triangle()
{
	std::cout << "I am destructor \n";
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
	std::cout << "Triangle Implementation area" << std::endl;
	return (int)(this->points[0]->distance(this->points[1]) * this->points[1]->distance(this->points[2]));
}