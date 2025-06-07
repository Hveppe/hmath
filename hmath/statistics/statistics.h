#ifndef HMATH_STATISTICS_H
#define HMATH_STATISTICS_H

#include <vector>
#include <algorithm>

#include "../algebra/basic_math/basic_math.h"

namespace hmath {
    // double input
    double average(std::vector<double> numbers);
    double median(std::vector<double> numbers);
    double variance(std::vector<double> numbers);

    // int input
    double average(std::vector<int> numbers);
    double median(std::vector<int> numbers);
    double variance(std::vector<int> numbers);
}

#endif