#ifndef GPS2CARTESIAN_H
#define GPS2CARTESIAN_H

#include <GeographicLib/Geodesic.hpp>
#include <iostream>
#include <exception>
#include <ros/ros.h>

using namespace std;
using namespace GeographicLib;

struct Cartesian{
  double x;
  double y;
};

struct GPS{
  double longitude;
  double latitude;
};

GPS get_origin();
Cartesian gps_to_cartesian(double goal_lat, double goal_long);

#endif
