#ifndef HMATH_ALGEBRA_BASIC_MATH_H
#define HMATH_ALGEBRA_BASIC_MATH_H

namespace hmath {
    // basic math functions
    double min(double a, double b);
    double max(double a, double b);
    double clamp(double value, double minValue, double maxValue);
    double sign(double number);
}

#endif