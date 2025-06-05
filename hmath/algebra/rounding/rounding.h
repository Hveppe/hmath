#ifndef HMATH_ALGEBRA_ROUNDING_H
#define HMATH_ALGEBRA_ROUNDING_H

#include "../exponential/exponential.h"

namespace hmath {
    // basic rounding and absolute value functions
    double abs(double number);
    int ceil(double number);
    int floor(double number);
    int trunc(double number);
    double round(double number, int decimals = 0);
    double absDiff(double a, double b);
    double fmod(double number, double modulus);
}

#endif