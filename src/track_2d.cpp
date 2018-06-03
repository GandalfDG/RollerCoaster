#include <vector>
#include <iostream>
#include <gsl/gsl_spline.h>

#include "track_point_2d.h"
#include "track_2d.h"

track_2d::track_2d(std::vector<track_point_2d> track_basis): track_basis(track_basis) {}

void track_2d::interpolate_track(unsigned int steps) {
    std::vector<double> step_vector;
    std::vector<double> angle_vector;

    unsigned int interpStep;
    double interpAngle;
    //setup the GSL interpolator
    gsl_spline* trackSpline = gsl_spline_alloc(gsl_interp_cspline, track_basis.size());
    gsl_interp_accel* trackAccel = gsl_interp_accel_alloc();

    //convert the vector of track points to two arrays
    for(track_point_2d point : track_2d::track_basis) {
        step_vector.push_back(point.step);
        angle_vector.push_back(point.angle);
    }

    //create the spline with the track data
    gsl_spline_init(trackSpline, step_vector.data(), angle_vector.data(), track_basis.size());

    for(unsigned int i = 0; i < steps + 1; i++) {
        interpStep = i;
        interpAngle = gsl_spline_eval(trackSpline, i, trackAccel);
        track_point_2d trackPoint(interpStep, interpAngle);
        track_interp.push_back(trackPoint);
    }


    //free interpolator resources
    gsl_interp_accel_free(trackAccel);
    gsl_spline_free(trackSpline);
}

void track_2d::print_track() {
    std::cout << "step    angle" << std::endl;
    std::cout << "-------------" << std::endl;

    for(track_point_2d point : track_interp) {
        point.printPoint();
    }
}
