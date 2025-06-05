#ifndef HMATH_STATISTICS_H
#define HMATH_STATISTICS_H

#include <vector>
#include <algorithm>

#include "../algebra/basic_math/basic_math.h"

namespace hmath {
    double average(std::vector<double> numbers);
    double median(std::vector<double> numbers);
    double variance(std::vector<double> numbers);
}

#endif