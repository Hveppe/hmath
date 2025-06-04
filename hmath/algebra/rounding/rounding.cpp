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

    int round(double number) {
        if(fmod(number, 1) < 0.5) {
            return floor(number);
        }
        return ceil(number);
    }

    double absDiff(double a, double b) {
        return abs(a - b);
    }
}