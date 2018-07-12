cmake_minimum_required(VERSION 3.10)
project(RollerCoaster)

set(CMAKE_CXX_STANDARD 11)

include_directories(include GSL_INCLUDE_DIRS)

add_executable(RollerCoaster
        main.cpp
        include/rapidcsv.h
        include/track_2d.h
        include/track_draw_point_2d.h
        include/track_point_2d.h
        include/coaster_data_set.h
        src/track_2d.cpp
        src/track_draw_point_2d.cpp
        src/track_point_2d.cpp
        src/coaster_data_set.cpp
        )

target_link_libraries(RollerCoaster gsl gslcblas)
