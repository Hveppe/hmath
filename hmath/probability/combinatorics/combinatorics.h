#ifndef HMATH_PROBABILITY_COMBINATORICS_H
#define HMATH_PROBABILITY_COMBINATORICS_H

#include "factorial/factorial.h"

namespace hmath {
    // using long long datatype to avoid overflow
    unsigned long long combinations(int total, int chosen);
    unsigned long long permutations(int total, int chosen);
}

#endif