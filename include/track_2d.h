#ifndef TRACK_2D_H
#define TRACK_2D_H

#include "track_point_2d.h"
#include "track_draw_point_2d.h"

class track_2d
{
    public:
        track_2d(std::vector<track_point_2d>);
        void process_track();
        void print_track();

    protected:

    private:
        std::vector<track_point_2d> track_basis;
        std::vector<track_point_2d> track_interp;
        std::vector<track_draw_point_2d> track_drawable;
        void interpolate_track();
        void generate_drawable();
        void normalize_drawable();
};

#endif // TRACK_2D_H
