#ifndef TRACK_2D_H
#define TRACK_2D_H


class track_2d
{
    public:
        track_2d(std::vector<track_point_2d>);
        void interpolate_track(unsigned int steps);
        void print_track();

    protected:

    private:
        std::vector<track_point_2d> track_basis;
        std::vector<track_point_2d> track_interp;
};

#endif // TRACK_2D_H
