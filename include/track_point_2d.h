#ifndef TRACK_POINT_2D_H
#define TRACK_POINT_2D_H

/* step represents the number of equal-distance steps along the track at which the point is measured
 * angle is the angle of the track in degrees at the step where zero degrees is horizontally forward
 */
class track_point_2d
{
    public:
        track_point_2d(unsigned int, double);

        unsigned int GetStep() { return step; }
        void SetStep(unsigned int val) { step = val; }
        double GetAngle() { return angle; }
        void SetAngle(double val) { angle = val; }
        void printPoint();

    protected:

    private:
        unsigned int step;
        double angle;
};

#endif // TRACK_POINT_2D_H
