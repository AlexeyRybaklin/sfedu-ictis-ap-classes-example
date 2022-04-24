//
// Created by elpil on 23.04.2022.
//

#include "Circle.h"
#define pi 3.14

Circle::Circle(Point* center, int radius) : r(radius), Figure(new Point* [1]{ new Point(center->getX(), center->getY()) }, 1)
{
	p = points;
}

int Circle::perimeter()
{
	std::cout << "Circle Implementation perimeter" << std::endl;
	return 2 * pi * r;
}

int Circle::area()
{
	std::cout << "Circle Implementation area" << std::endl;
	return pi * pow(r, 2);
}

Circle::~Circle()
{
	std::cout << "ABOBA \n";
}