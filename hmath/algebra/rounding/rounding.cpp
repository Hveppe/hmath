#include "rounding.h"

namespace hmath {
    // basic rounding and absolute value functions
    double abs(double number) {
        if(number < 0) {
            return (number * -1);
        }
        return number;
    }

    int ceil(double number) {
        int intNumber = static_cast<int>(number);
        return (number > intNumber) ? intNumber + 1 : intNumber;
    }

    int floor(double number) {
        int intNumber = static_cast<int>(number);
        return (number < intNumber) ? intNumber - 1 : intNumber;
    }

    int trunc(double number) {
        if(number < 0) {
            return hmath::ceil(number);
        }
        return hmath::floor(number);
    }

    double fmod(double number, double modulus) {
        return number - modulus * hmath::trunc(number / modulus);
    }

    double round(double number, int decimals) {
        double factor = hmath::pow(10.0, decimals);
        return hmath::floor(number * factor + 0.5) / factor;
    }

    double absDiff(double a, double b) {
        return abs(a - b);
    }
}