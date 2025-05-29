#ifndef HMATH_ALGEBRA_H
#define HMATH_ALGEBRA_H

// included libraries
#include <optional>
#include <stdexcept>

namespace hmath {
    double abs(double number);
    double doublePow(double number, int exponent, std::optional<double> modulus = std::nullopt);
    double intPow(int number, int exponent, std::optional<int> modulus = std::nullopt);
    double sqrtHerons(double number);
}

#endif