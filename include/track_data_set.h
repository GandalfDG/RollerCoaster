#ifndef TRACK_DATA_SET_H
#define TRACK_DATA_SET_H

#include <vector>
#include <string>

class track_data_set
{
    public:
        track_data_set(std::string csv_path);
        virtual ~track_data_set();
        std::vector<double> Gettimestamp() { return timestamp; }
        std::vector<double> GetgFx() { return gFx; }
        std::vector<double> GetgFy() { return gFy; }
        std::vector<double> GetgFz() { return gFz; }
        std::vector<double> Getax() { return ax; }
        std::vector<double> Getay() { return ay; }
        std::vector<double> Getaz() { return az; }
        std::vector<double> Getwx() { return wx; }
        std::vector<double> Getwy() { return wy; }
        std::vector<double> Getwz() { return wz; }
        std::vector<double> GetBx() { return Bx; }
        std::vector<double> GetBy() { return By; }
        std::vector<double> GetBz() { return Bz; }
        std::vector<double> GetAzimuth() { return Azimuth; }
        std::vector<double> GetPitch() { return Pitch; }
        std::vector<double> GetRoll() { return Roll; }
        std::vector<double> GetLatitude() { return Latitude; }
        std::vector<double> GetLongitude() { return Longitude; }
        std::vector<double> GetSpeed() { return Speed; }
    protected:
    private:
    std::array
        std::vector<double> timestamp;
        std::vector<double> gFx;
        std::vector<double> gFy;
        std::vector<double> gFz;
        std::vector<double> ax;
        std::vector<double> ay;
        std::vector<double> az;
        std::vector<double> wx;
        std::vector<double> wy;
        std::vector<double> wz;
        std::vector<double> Bx;
        std::vector<double> By;
        std::vector<double> Bz;
        std::vector<double> Azimuth;
        std::vector<double> Pitch;
        std::vector<double> Roll;
        std::vector<double> Latitude;
        std::vector<double> Longitude;
        std::vector<double> Speed;
};

#endif // TRACK_DATA_SET_H
