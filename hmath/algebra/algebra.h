#ifndef HMATH_ALGEBRA_H
#define HMATH_ALGEBRA_H

// included libraries
#include <optional>
#include <stdexcept>
#include <iostream>

namespace hmath {
    // constants
    const double PI = 3.14159265358979323846;
    const double euler = 2.71828182845904523536;
    
    double abs(double number);
    int ceil(double number);
    int floor(double number);
    int trunc(double number);
    int round(double number);

    double exp(double number);
    double ln(double number);
    double fmod(double number, double modulus);
    
    double logPow(double number, int exponent, std::optional<double> modulus = std::nullopt);
    double sqrt(double number);
}

#endif