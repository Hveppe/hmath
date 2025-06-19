#ifndef HMATH_ALGEBRA_BASIC_MATH_H
#define HMATH_ALGEBRA_BASIC_MATH_H

#include "../rounding/rounding.h"
#include <vector>

namespace hmath {
    // min and max functions
    double min(double a, double b);
    double max(double a, double b);
    double min(std::vector<double> numbers);
    double max(std::vector<double> numbers);
    int min(std::vector<int> numbers);
    int max(std::vector<int> numbers);

    // sum functions
    double sum(std::vector<double> numbers, double start = 0.0);
    double sum(std::vector<int> numbers, double start = 0.0);
    int sum(std::vector<int> numbers, int start = 0);

    // other functions
    double clamp(double value, double minValue, double maxValue);
    double sign(double number);
    void swap(double &a, double &b);
    std::pair<int, double> intAndFracParts(double number);
}

#endif