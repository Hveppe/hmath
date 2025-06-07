#ifndef HMATH_ALGEBRA_DIVISORS_H
#define HMATH_ALGEBRA_DIVISORS_H

#include "../typechecks/typechecks.h"
#include "../rounding/rounding.h"
#include <vector>

namespace hmath {
    // divisor functions
    std::vector<int> divisors(int number);
    std::vector<int> primeFactors(int number);
    int countDivisors(int number);
    int gcd(int a, int b);
    int lcm(int a, int b);
}

#endif