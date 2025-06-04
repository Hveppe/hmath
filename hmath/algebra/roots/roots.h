#ifndef HMATH_ALGEBRA_ROOTS_H
#define HMATH_ALGEBRA_ROOTS_H

#include "../exponential/exponential.h"
#include "../rounding/rounding.h"
#include <stdexcept>

namespace hmath {
    // root functions
    double sqrt(double number);
    double nthRoot(double number, int root);
}

#endif