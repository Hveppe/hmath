#include "basic_math.h"

namespace hmath {
    double min(double a, double b) {
        return (a < b) ?  a : b;
    }

    double max(double a, double b) {
        return (a > b) ?  a : b;
    }

    double clamp(double value, double minValue, double maxValue) {
        return hmath::max(minValue, hmath::min(value, maxValue));
    }

    double sign(double number) {
        return (number > 0) - (number < 0);
    }
}