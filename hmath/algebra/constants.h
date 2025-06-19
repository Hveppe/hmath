#ifndef HMATH_CONSTANTS_H
#define HMATH_CONSTANTS_H

#include <limits>

namespace hmath {
    constexpr double PI = 3.14159265358979323846;
    constexpr double EULER = 2.71828182845904523536;
    constexpr double TAU = 2 * hmath::PI;
    constexpr double INF = std::numeric_limits<double>::infinity();
}

#endif