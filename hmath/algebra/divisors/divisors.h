#ifndef HMATH_ALGEBRA_DIVISORS_H
#define HMATH_ALGEBRA_DIVISORS_H

#include "../rounding/rounding.h"
#include <vector>

namespace hmath {
    // divisor functions
    std::vector<int> divisors(int number);
    int gcd(int a, int b);
    int lcm(int a, int b);
}

#endif