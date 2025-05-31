#ifndef HMATH_ALGEBRA_H
#define HMATH_ALGEBRA_H

// included libraries
#include <optional>
#include <stdexcept>
#include <iostream>

namespace hmath {
    double abs(double number);
    int ceil(double number);
    int floor(double number);
    int trunc(double number);
    int round(double number);
    double fmod(double number, double modulus);

    double doublePow(double number, int exponent, std::optional<double> modulus = std::nullopt);
    double intPow(int number, int exponent, std::optional<int> modulus = std::nullopt);
    double sqrt(double number);
}

#endif