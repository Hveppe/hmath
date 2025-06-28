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
        if(skip == 0) {throw std::domain_error("Skip value cant be lower then 1");}
        if(number == 0) {return 1;}

        long long result = 1;

        for(int i = (int) number; 0 < i; i -= skip) {
            result *= i;
        }

        return result;
    }

    long long superFactorial(unsigned int number) {
        if(number == 0) {return 1;}

        long long result = 1;

        for(unsigned int i = 1; i <= number; i++) {
            result *= hmath::factorial(i);
        }

        return result;
    }

    long long hyberFactorial(unsigned int number) {
        if(number == 0) {return 1;}
        
        long long result = 1;

        for(unsigned int i = 1; i <= number; i++) {
            result *= hmath::longPow(i, i);
        }

        return result;
    }

    long long fallingFactorial(unsigned int number, unsigned int fallingValue) {
        if(number < fallingValue) {throw std::domain_error("Fallingvalue needs to be smaller then number");}
        if(fallingValue == 0) {return 1;}
        if(number == 0) {return 0;}
        
        long long result = 1;

        for(unsigned int i = number; number - fallingValue + 1 <= i; i--) {
            result *= i;
        }

        return result;
    }

    long long risingFactorial(unsigned int number, unsigned int risingValue) {
        if(risingValue == 0) {return 1;}
        if(number == 0) {return 0;}
        
        long long result = 1;

        for(unsigned int i = number; i <= number + risingValue - 1; i++) {
            result *= i;
        }

        return result;
    }

    long long expFactorial(unsigned int number) {
        long long result = number;
        
        for(int i = 1; i <= (int) number; i++) {
            result = longPow(i, result);
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