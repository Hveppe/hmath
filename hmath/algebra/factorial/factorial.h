#ifndef HMATH_ALGEBRA_FACTORIAL_H
#define HMATH_ALGEBRA_FACTORIAL_H

#include "../typechecks/typechecks.h"
#include "../rounding/rounding.h"
#include <iostream>
#include <stdexcept>

namespace hmath {
    // factorial functions
    long long factorial(unsigned int number);
    long long doubleFactorial(unsigned int number);
    long long subFactorial(unsigned int number);
    long long multifactorial(unsigned int number, unsigned int skip = 1);
    long long superFactorial(unsigned int number);
    long long primorial(unsigned int number);
}

#endif