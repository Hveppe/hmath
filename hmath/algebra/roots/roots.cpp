#include "roots.h"

namespace hmath {
    // root functions
    double sqrt(double number) {
        if(number < 0) {throw std::domain_error("Can't take sqrt of negativ numbers");}
        if(number == 0) {return 0;}
        
        double x = number, prev;
        const double tolerance = 1e-10;

        while( hmath::abs(x - prev) > tolerance) {
            prev = x;
            x = 0.5 * (x + number / x);
        }

        return x;
    }

    double cbrt(double number) {
        if(number == 0) {return 0;}
        
        double x = number, prev;
        const double tolerance = 1e-10;

        while(hmath::abs(x - prev) > tolerance) {
            prev = x;
            x = (2.0 / 3.0) * x + (number / (3.0 * x * x));
        }

        return x;
    }
    
    double nthRoot(double number, int root) {
        if(number < 0 && root % 2 == 0) {throw std::domain_error("Can't take even root of negativ numbers");}
        if(root == 0) {throw std::domain_error("Root can't be zero");}
        if(number == 0) {return 0;}
        
        double x = number, prev;
        const double tolerance = 1e-10;

        while( hmath::abs(x - prev) > tolerance) {
            prev = x;
            x = ((double) (root - 1) / root) * x + (number / (root * hmath::logPow(x, root - 1)));
        }

        return x;
    }
}