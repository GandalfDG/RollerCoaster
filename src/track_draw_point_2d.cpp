#include <iostream>

#include "track_draw_point_2d.h"

track_draw_point_2d::track_draw_point_2d(double x= 0.0, double y= 0.0): x(x), y(y) {}

track_draw_point_2d::~track_draw_point_2d()
{
    //dtor
}

void track_draw_point_2d::printPoint() {
    std::cout << x << "    " << y << std::endl;
}
