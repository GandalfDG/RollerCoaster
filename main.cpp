#include <iostream>
#include <vector>

#include "track_point_2d.h"
#include "track_draw_point_2d.h"
#include "track_2d.h"

int main() {
    track_point_2d point1(0, 0);
    track_point_2d point2(30, 60);
    track_point_2d point3(38, 0);
    track_point_2d point4(50, -10);

    std::vector<track_point_2d> track {point1, point2, point3, point4};
    std::vector<track_draw_point_2d> track_drawable;

    track_2d coolTrack(track);
    coolTrack.interpolate_track();
    coolTrack.generate_drawable();

    coolTrack.print_track();

    return 0;
}
