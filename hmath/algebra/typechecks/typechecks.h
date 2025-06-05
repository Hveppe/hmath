#ifndef HMATH_ALGEBRA_TYPECHECKS_H
#define HMATH_ALGEBRA_TYPECHECKS_H

#include "../exponential/exponential.h"
#include "../rounding/rounding.h"

namespace hmath {
    // type check functions
    bool isEven(int number);
    bool isOdd(int number);
    bool isPrime(int number);
    bool isBetween(double value, double minValue, double maxValue);
    bool isZero(double value, double tolerance = 1e-10);
    bool isDivisor(int a, int b);
}   

#endif