#ifndef HMATH_ALGEBRA_H
#define HMATH_ALGEBRA_H

// included libraries
#include <stdexcept>
#include <iostream>
#include <vector>

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
    double absDiff(double a, double b);
    double fmod(double number, double modulus);

    // type check functions
    bool isEven(int number);
    bool isOdd(int number);
    bool isPrime(int number);

    // divisor functions
    std::vector<int> divisors(int number);
    int gcd(int a, int b);
    int lcm(int a, int b);

    // exponential, logarithmic and factorial functions
    double exp(double number);
    double ln(double number);
    int factorial(int number);

    // power functions
    double pow(double base, int exponent);
    double logPow(double base, double exponent);
    int modPow(int base, int exponent, int modulus);

    // root functions
    double sqrt(double number);
    double nthRoot(double number, int root);
}

#endif