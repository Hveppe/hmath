#include "exponential.h"

namespace hmath {
    // exponential, logarithmic and factorial functions
    double exp(double number) {
        double term = 1.0, result = 1.0, tolerance = 1e-10;
        int n = 1;
        
        while(true) {
            term *= number / n;
            result += term;
            n++;

            if (hmath::abs(term) < tolerance) {return result;}
        }
    }

    double ln(double number) {
        if(number == 0) {return 1;}
        if(number < 0) {throw std::domain_error("ln(x) is undefined for x <= 0");}

        double y = number - 1.0, tolerance = 1e-10;

        while(true) {
            double ey = hmath::exp(y);
            double delta = (ey - number) / ey;
            y -= delta;

            if(hmath::abs(delta) < tolerance) {return y;}
        }
    }

    long long factorial(unsigned int number) {
        if(number == 0) {return 1;}

        int result = 1;

        for(int i = 1; i <= (int) number; i++) {
            result *= i;
        }

        return result;
    }

    // power functions
    double pow(double base, int exponent) {
        double result = 1;

        for(int i = 0; i < exponent; i++) {
            result *= base;
        }

        return result;
    }
    
    double logPow(double base, double exponent) {
        double result;
        
        if(base < 0.0) {
            if(hmath::floor(exponent) != exponent) {throw std::domain_error("Negative base with non-interger exponent results in complex number");}

            result = hmath::exp(exponent * hmath::ln(-base));

            if(fmod(exponent, 2) != 0.0) {
                result *= -1;
            }
        } else {
            result = hmath::exp(exponent * hmath::ln(base));
        }

        return result;
    }
   
    int modPow(int base, int exponent, int modulus) {
        if(modulus == 1) {
            return 0;
        }

        int result = 1;
        base %= modulus;

        while(exponent > 0) {
            if(exponent % 2 == 1) {
                result = (result * base) % modulus;
            }
            exponent >>= 1;
            base = (base * base) % modulus;
        }
        return result;
    }
}