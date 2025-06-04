#ifndef HMATH_ALGEBRA_H
#define HMATH_ALGEBRA_H

// included libraries
#include <stdexcept>
#include <iostream>

namespace hmath {
    // constants
    const double PI = 3.14159265358979323846;
    const double euler = 2.71828182845904523536;
    
    // basic rounding and absolute value functions
    double abs(double number);
    int ceil(double number);
    int floor(double number);
    int trunc(double number);
    int round(double number);
    double fmod(double number, double modulus);

    // type checks
    bool isEven(int number);
    bool isOdd(int number);
    bool isPrime(int number);

    // exponential, logarithmic, factorial, power, and root functions
    double exp(double number);
    double ln(double number);
    int factorial(int number);
    double logPow(double base, double exponent);
    int modPow(int base, int exponent, int modulus);
    double sqrt(double number);
}

#endif