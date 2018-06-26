//
// Created by jack on 6/25/18.
//

#ifndef ROLLERCOASTER_COASTER_DATA_SET_H
#define ROLLERCOASTER_COASTER_DATA_SET_H

#include <map>
#include <vector>


class coaster_data_set {
public:
    explicit coaster_data_set(std::string csv_path);
    std::map<std::string, std::vector<double>> data;

};


#endif //ROLLERCOASTER_COASTER_DATA_SET_H
