#ifndef HMATH_GEOMETRY_H
#define HMATH_GEOMETRY_H

#include "../algebra/algebra.h"

namespace hmath {
    // Geometry
    const double PI = 3.14159265358979323846;
    double degreeToRadian(double degrees); 
    double radianToDegree(double radians);

    // Trigonometry
    double sin(double x, int terms = 10);
    double cos(double x, int terms = 10);
    double tan(double x, int terms = 10);
    
    double arcSin(double x);
    double arcCos(double x);
}

#endif