#include "hmath.h"

namespace hmath {
    double pow(double number, int exponent) {
        double result = number; 
        for(int i = 0; i < exponent; i++) {
           result *= number;
        }

        return result;
    }

    double sqrt_herons(double number) {
        double x = number;

        for(int i = 0; i < 1000; i++ ) {
            x = 0.5 * (x + number / x);
        }

        return x;
    }
}