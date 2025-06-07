#ifndef HMATH_ALGEBRA_EXPONENTIAL_H
#define HMATH_ALGEBRA_EXPONENTIAL_H

#include "../rounding/rounding.h"
#include <stdexcept>

namespace hmath {
    // exponential and factorial functions
    double exp(double number);
    int factorial(int number);

    // logarithmic functions
    double ln(double number);
    double log10(double number);

    // power functions
    double pow(double base, int exponent);
    double logPow(double base, double exponent);
    int modPow(int base, int exponent, int modulus);
}

#endif