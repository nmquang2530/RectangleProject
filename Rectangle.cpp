#include "Rectangle.h"

Rectangle::Rectangle(double l, double w)
{
    length = l;
    width = w;
}

double Rectangle::perimeter() const
{
    return 2 * (length + width);
}

double Rectangle::area() const
{
    return length * width;
}
