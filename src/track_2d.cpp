#include <vector>
#include <cmath>
#include <iostream>
#include <gsl/gsl_spline.h>

#include "track_2d.h"

track_2d::track_2d(std::vector<track_point_2d> track_basis): track_basis(track_basis), track_interp(), track_drawable() {

}

void track_2d::interpolate_track() {
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

    //calculate the angle for each step based on the interpolation function
    for(unsigned int i = 0; i < track_basis.back().step + 1; i++) {
        interpStep = i;
        interpAngle = gsl_spline_eval(trackSpline, i, trackAccel);
        track_point_2d trackPoint(interpStep, interpAngle);
        track_interp.push_back(trackPoint);
    }


    //free interpolator resources
    gsl_interp_accel_free(trackAccel);
    gsl_spline_free(trackSpline);
}


//convert the vector of angles and steps to x and y coordinates
void track_2d::generate_drawable() {
    //calculate pi
    const double PI = 4 * std::atan(1);

    //the track starts at (0,0)
    track_drawable.push_back(track_draw_point_2d(0.0, 0.0));

    //move 1 unit from the previous point at the angle from the track interpolation
    for(unsigned int i = 1; i < track_interp.size(); i++) {
        double x, y;
        //use trigonometric functions (degrees must be converted to radians)
        x = track_drawable[i-1].x + std::cos(track_interp[i-1].angle * PI / 180.0);
        y = track_drawable[i-1].y - std::sin(track_interp[i-1].angle * PI / 180.0);
        track_drawable.push_back(track_draw_point_2d(x, y));
    }
}

void track_2d::print_track() {
    //print the interpolated angles
    std::cout << "step    angle" << std::endl;
    std::cout << "-------------" << std::endl;

    for(track_point_2d point : track_interp) {
        point.printPoint();
    }

    //print the x/y coordinates of the track
    std::cout << "step    angle" << std::endl;
    std::cout << "-------------" << std::endl;

}
