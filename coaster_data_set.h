//
// Created by jack on 6/25/18.
//

#ifndef ROLLERCOASTER_COASTER_DATA_SET_H
#define ROLLERCOASTER_COASTER_DATA_SET_H

#include <map>
#include <vector>


class coaster_data_set {
public:
    std::map<std::string, std::vector<double>> data {
        {"time", new std::vector<double>},

    };
};


#endif //ROLLERCOASTER_COASTER_DATA_SET_H
