//
// Created by jack on 6/25/18.
//

#include "coaster_data_set.h"
#include "rapidcsv.h"

coaster_data_set::coaster_data_set(std::string csv_path) {
    //populate coaster data map from provided csv
    try {
        rapidcsv::Document csv_data(csv_path, rapidcsv::LabelParams(0, -1)); //row 1 column headers, no row labels
        std::string label = "";
        for (unsigned int i = 0; i < csv_data.GetColumnCount() - 1; i++) {
            label = csv_data.GetColumnLabel(i);
            data.emplace(label, csv_data.GetColumn<double>(i));
            std::cout << label << ": " << data.at(label)[0] << std::endl;
        }
    } catch (...) {
        std::cout << "error loading csv data - check file path" << std::endl;
    }
}
