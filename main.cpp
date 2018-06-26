#include <iostream>
#include <fstream>
#include <vector>

#include "rapidcsv.h"
#include "track_point_2d.h"
#include "track_draw_point_2d.h"
#include "track_2d.h"
#include "coaster_data_set.h"

int main() {
    coaster_data_set data{"../Test_multi_record.csv"};

    //    rapidcsv::Document doc("/home/jack/RollerCoaster/Test_multi_record.csv", rapidcsv::LabelParams(0, -1));
//    for(unsigned int i = 0; i < doc.GetColumnCount() - 1; i++) {
//        std::cout << doc.GetColumnLabel(i) << ", ";
//    }
//
//
//
//
//    track_point_2d point1(0, 0);
//    track_point_2d point2(20, 80);
//    track_point_2d point3(38, 90);
//    track_point_2d point4(50, 10);
//    track_point_2d point5(60, -5.0);
//
//
//    std::vector<track_point_2d> track {point1, point2, point3, point4, point5};
//    std::vector<track_draw_point_2d> track_drawable;
//
//    track_2d coolTrack(track);
//    coolTrack.process_track();
//    coolTrack.print_track();


    return 0;
}
