#ifndef HMATH_TRIGONOMETRY_H
#define HMATH_TRIGONOMETRY_H

#include "../../algebra/algebra.h"
#include "../geometry/geometry_common.h"

namespace hmath {
    // Trigonometry
    double sin(double x, int terms = 10);
    double cos(double x, int terms = 10);
    double tan(double x, int terms = 10);
    
    double arcSin(double x);
    double arcCos(double x);
    double arcTan(double x);
}

#endif