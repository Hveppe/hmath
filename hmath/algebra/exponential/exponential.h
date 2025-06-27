#ifndef HMATH_ALGEBRA_EXPONENTIAL_H
#define HMATH_ALGEBRA_EXPONENTIAL_H

#include "../typechecks/typechecks.h"
#include "../rounding/rounding.h"
#include <stdexcept>

namespace hmath {
    // exponential functions
    double exp(double number);

    // logarithmic functions
    double ln(double number);
    double log10(double number);

    // power functions
    double pow(double base, int exponent);
    double logPow(double base, double exponent);
    int modPow(int base, int exponent, int modulus);
}

#endif