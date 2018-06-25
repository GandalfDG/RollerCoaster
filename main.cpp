#include <iostream>
#include <fstream>
#include <vector>

#include "csv.h"
#include "track_point_2d.h"
#include "track_draw_point_2d.h"
#include "track_2d.h"

int main() {

    io::CSVReader<2> reader("Test_multi_record.csv");
    reader.read_header(io::ignore_extra_column, "time", "gFx");
    std::cout << reader.next_line();


    std::ifstream csvfile;
    csvfile.open("Test_multi_record.csv");
    std::string line;
    csvfile >> line;
    std::cout << line;

    /*
    track_point_2d point1(0, 0);
    track_point_2d point2(20, 80);
    track_point_2d point3(38, 90);
    track_point_2d point4(50, 10);
    track_point_2d point5(60, -5.0);


    std::vector<track_point_2d> track {point1, point2, point3, point4, point5};
    std::vector<track_draw_point_2d> track_drawable;

    track_2d coolTrack(track);
    coolTrack.process_track();
    coolTrack.print_track();
    */

    return 0;
}
