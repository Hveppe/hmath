#ifndef HMATH_H
#define HMATH_H

// included libraries
#include <optional>

namespace hmath {
    double pow(double number, int exponent, std::optional<int> modulus = std::nullopt);
    double sqrt_herons(double number);
}

#endif