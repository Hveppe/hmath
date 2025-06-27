#include "factorial.h"

namespace hmath {
    long long factorial(unsigned int number) {
        if(number == 0) {return 1;}

        long long result = 1;

        for(unsigned int i = 1; i <= number; i++) {
            result *= i;
        }

        return result;
    }

    long long doubleFactorial(unsigned int number) {
        if(number == 0) {return 1;}
        
        bool even = (number % 2 == 0);
        long long result = 1;

        for(unsigned int i = 1; i <= number; i++) {
            if((i % 2 == 0) == even) {
                result *= i;
            }
        }

        return result;
    }

    long long subFactorial(unsigned int number) {
        if(number == 0) {return 1;}
        
        long double result = 0;

        for(unsigned int i = 0; i <= number; i++) {
            long double tempResult = (1.0 / (long double) factorial(i));
            result += (i % 2 == 0) ? tempResult : -tempResult;   
        }

        return hmath::round(factorial(number) * result);
    }

    long long multifactorial(unsigned int number, unsigned int skip) {
        if(number == 0) {return 1;}
        
        long long result = 1;

        for(int i = (int) number; 0 < i; i -= skip) {
            result *= i;
        }

        return result;
    }

    long long primorial(unsigned int number) {
        if(!hmath::isPrime(number)) {throw std::domain_error("primorial input needs to be a prime number");}
        
        long long result = 1;

        for(unsigned int i = 1; i <= number; i++) {
            if(hmath::isPrime(i)) {
                result *= i;
            }
        }

        return result;
    }
}