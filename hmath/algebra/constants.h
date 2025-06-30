#ifndef HMATH_CONSTANTS_H
#define HMATH_CONSTANTS_H

#include <limits>
#include "roots/roots.h"

namespace hmath {
    constexpr double PI = 3.14159265358979323846;
    constexpr double EULER = 2.71828182845904523536;
    const double OMEGA = 0.56714329040978387300;
    const double GELFOND_CONSTANT = hmath::exp(hmath::PI);
    const double GELFOND_SCHNEIDER_CONSTANT = hmath::logPow(2, hmath::sqrt(2));
    constexpr double TAU = 2 * hmath::PI;
    constexpr double INF = std::numeric_limits<double>::infinity();
    constexpr double RECIPROCAL_FIBONACCI_CONSTANT = 3.359885666243177553172011;
    const double GOLDEN_RATIO = (1 + hmath::sqrt(5))/2;
}

#endif