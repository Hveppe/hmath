#ifndef HMATH_CONSTANTS_H
#define HMATH_CONSTANTS_H

#include <limits>
#include "roots/roots.h"

namespace hmath {
    constexpr double PI = 3.14159265358979323846;
    constexpr double EULER = 2.71828182845904523536;
    const double OMEGA = 0.56714329040978387300;
    const double GELFONDCONSTANT = hmath::exp(hmath::PI);
    const double GELFONDSCHNEIDERCONSTANT = hmath::logPow(2, hmath::sqrt(2));
    constexpr double TAU = 2 * hmath::PI;
    constexpr double INF = std::numeric_limits<double>::infinity();
    constexpr double RECIPROCALFIBONACCICONSTANT = 3.359885666243177553172011;
    const double GOLDENRATIO = (1 + hmath::sqrt(5))/2;
}

#endif