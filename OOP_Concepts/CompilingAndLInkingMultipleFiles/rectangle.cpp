#include "rectangle.h"

Rectangle::Rectangle(int len, int wid)
{
    length = len;
    width = wid;
}

int Rectangle::getArea()
{
    return length * width;
}