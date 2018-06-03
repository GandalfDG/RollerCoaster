#include <iostream>
#include <vector>

#include "track_point_2d.h"
#include "track_2d.h"

int main() {
    track_point_2d point1(0, 87.0);
    track_point_2d point2(38, 30.2);
    track_point_2d point3(50, -50.0);
    track_point_2d point4(60, 50.0);

    std::vector<track_point_2d> track {point1, point2, point3, point4};

    track_2d coolTrack(track);
    coolTrack.interpolate_track(60);

    coolTrack.print_track();

    return 0;
}
