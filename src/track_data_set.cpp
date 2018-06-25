#include "track_data_set.h"
#include "rapidcsv.h"

track_data_set::track_data_set(std::string csv_path)
{
    rapidcsv::Document data(csv_path, rapidcsv::LabelParams(0, -1));
    timestamp = data.GetColumn<double>("time");
    gFx = data.GetColumn<double>("time");
}

track_data_set::~track_data_set()
{
    //dtor
}
