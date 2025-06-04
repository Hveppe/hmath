#include "algebra.h"

namespace hmath {
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

    int factorial(int number) {
        if(number == 0) {return 1;}
        if(number < 0) {throw std::domain_error("factorial can only take positive numbers");}

        int result = 1;

        for(int i = 1; i < number + 1; i++) {
            result *= i;
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
   
    double modPow(int base, int exponent, int modulus) {
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
}