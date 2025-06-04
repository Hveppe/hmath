#ifndef HMATH_ALGEBRA_EXPONENTIAL_H
#define HMATH_ALGEBRA_EXPONENTIAL_H

#include "../rounding/rounding.h"
#include <stdexcept>

namespace hmath {
    // exponential, logarithmic and factorial functions
    double exp(double number);
    double ln(double number);
    int factorial(int number);

    // power functions
    double pow(double base, int exponent);
    double logPow(double base, double exponent);
    int modPow(int base, int exponent, int modulus);
}

#endif