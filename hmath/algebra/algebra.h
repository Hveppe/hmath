#ifndef HMATH_ALGEBRA_H
#define HMATH_ALGEBRA_H

// included libraries
#include <optional>

namespace hmath {
    double abs(double number);
    double intPow(int number, int exponent, std::optional<int> modulus = std::nullopt);
    double sqrtHerons(double number);
}

#endif