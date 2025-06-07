#ifndef HMATH_STATISTICS_H
#define HMATH_STATISTICS_H

#include <vector>
#include <algorithm>

#include "../algebra/basic_math/basic_math.h"

namespace hmath {
    // double input
    double average(const std::vector<double> &numbers);
    double median(std::vector<double> numbers);
    double variance(const std::vector<double> &numbers, bool sampleCase = true);

    // int input
    double average(const std::vector<int> &numbers);
    double median(std::vector<int> numbers);
    double variance(const std::vector<int> &numbers,  bool sampleCase = true);
}

#endif