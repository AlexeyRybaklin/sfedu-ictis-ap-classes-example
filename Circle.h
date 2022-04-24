//
// Created by elpil on 23.04.2022.
//

#ifndef CLASSES_CIRCLE_H
#define CLASSES_CIRCLE_H

#include <iostream>
#include "Figure.h"

/**
 * TODO Implement constructor, destructor,  perimeter and area methods in Circle.cpp file
 *
 */
class Circle : public Figure {
    
    Point** p;
    int r;

public:
    Circle(Point *center, int radius);

    int perimeter() override;

    int area() override;

    ~Circle();
};


#endif //CLASSES_CIRCLE_H
