#ifndef TRACK_POINT_2D_H
#define TRACK_POINT_2D_H

/* step represents the number of equal-distance steps along the track at which the point is measured
 * angle is the angle of the track in degrees at the step where zero degrees is horizontally forward
 */
class track_point_2d
{
    public:
        unsigned int step;
        double angle;

        track_point_2d(unsigned int, double);
        void printPoint();
};

#endif // TRACK_POINT_2D_H
