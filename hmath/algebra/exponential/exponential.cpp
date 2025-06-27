#include "exponential.h"

namespace hmath {
    // exponential functions
    double exp(double number) {
        // Constants (hardcoded)
        const double ln2 = 0.6931471805599453;
        const double invln2 = 1.4426950408889634;

        // Handle large/small inputs to avoid overflow and underflow
        if (number > 709.0) 
            return 1e308; 
        if (number < -745.0) 
            return 0.0;

        // Range reduction
        int k = hmath::round(number * invln2);
        double r = number - k * ln2;

        // Polynomial approx
        double r2 = r * r;
        double r3 = r2 * r;
        double r4 = r3 * r;
        double r5 = r4 * r;

        double approx = 1.0 + r + r2 * 0.5 + r3 * (1.0 / 6.0) + r4 * (1.0 / 24.0) + r5 * (1.0 / 120.0);

        // Multiply by 2^k
        return approx * hmath::pow(2, k);
    }

    // logarithmic functions
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

    double log10(double number) {
        return hmath::ln(number) / hmath::ln(10);
    }

    // power functions
    double pow(double base, unsigned int exponent) {
        double result = 1;

        for(int i = 0; i < (int) exponent; i++) {
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

    long long longPow(unsigned long long base, unsigned long long exponent) {
        long long result = 1;

        for(long long i = 0; i < (long long) exponent; i++) {
            result *= base;
        }

        return result;
    }

    long long tetration(unsigned int base, unsigned int tetrativeExponent) {
        if (tetrativeExponent == 1) {
            return base;
        }
        return longPow(base, tetration(base, tetrativeExponent - 1));
    }
}