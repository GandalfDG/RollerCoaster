#include <iostream>

#include "track_point_2d.h"

track_point_2d::track_point_2d(unsigned int step= 0, double angle= 0.0): step(step), angle(angle) {}

void track_point_2d::printPoint() {
    std::cout << step << "    " << angle << std::endl;
}
