#ifndef HMATH_ALGEBRA_BASIC_MATH_H
#define HMATH_ALGEBRA_BASIC_MATH_H

#include <vector>

namespace hmath {
    // basic math functions
    double min(double a, double b);
    double max(double a, double b);

    double min(std::vector<double> numbers);
    double max(std::vector<double> numbers);

    int min(std::vector<int> numbers);
    int max(std::vector<int> numbers);

    double clamp(double value, double minValue, double maxValue);
    double sign(double number);
    void swap(double &a, double &b);
}

#endif