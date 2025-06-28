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
    double pow(double base, unsigned int exponent);
    double logPow(double base, double exponent);
    int modPow(int base, unsigned int exponent, int modulus);
    long long longPow(unsigned long long base, unsigned long long exponent);
    long long longModPow(unsigned long long base, unsigned long long exponent, long long modulus);
    long long tetration(unsigned int base, unsigned int tetrativeExponent);
}

#endif