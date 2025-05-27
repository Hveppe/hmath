#include "hmath.h"

namespace hmath {
    float pow(float number, int exponent) {
        float result = number; 
        for(int i = 0; i < exponent; i++) {
           result *= number;
        }

        return result;
    }

    float sqrt_herons(float number) {
        double x = number;

        for(int i = 0; i < 1000; i++ ) {
            x = 0.5 * (x + number / x);
        }

        return x;
    }
}