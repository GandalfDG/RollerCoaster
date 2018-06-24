#ifndef COASTER_DATA_POINT_H
#define COASTER_DATA_POINT_H


class coaster_data_point
{
    public:
        double time;

        // g-force
        double gFx, gFy, gFz;

        // Linear Acceleration
        double ax, ay, az;

        // Gyroscope
        double wx, wy, wz;

        // Magnetometer
        double Bx, By, Bz;

        // Inclinometer
        double Azimuth, Pitch, Roll;

        // GPS
        double Latitude, Longitude, Speed;
        coaster_data_point(double time, double gFx, double gFz, double ax, double ay, double az, double wx, double wy, double wz, double Bx, double By, double Bz, double Azimuth, double Pitch, double Roll);
        ~coaster_data_point();
    protected:
    private:
};

#endif // COASTER_DATA_POINT_H
