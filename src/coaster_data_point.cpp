#include "coaster_data_point.h"
#include "csv.h"

coaster_data_point::coaster_data_point(double time, double gFx, double gFz, double ax, double ay, double az, double wx, double wy, double wz, double Bx, double By, double Bz, double Azimuth, double Pitch, double Roll):
time(time), gFx(gFx), gFy(gFy), gFz(gFz), ax(ax), ay(ay), az(az), wx(wx), wy(wy), wz(wz), Bx(Bx), By(By), Bz(Bz), Azimuth(Azimuth), pitch(pitch), roll(roll) {

}

coaster_data_point::~coaster_data_point()
{
    //dtor
}
