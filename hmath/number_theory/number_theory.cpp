#include "number_theory.h"

namespace hmath {
    
    // Fibonacci
    int fibonacci(unsigned int number) {
        if(number == 0) {return 0;}
        if(number == 1) {return 1;}

        return hmath::fibonacci(number - 1) + hmath::fibonacci(number - 2);
    }

    // Tribonacci
    int tribonacci (unsigned int number) {
        static bool firstCall = true;

        if(firstCall) {
            firstCall = false;
            if (number <= 2) {
                throw std::domain_error("Number needs to be larger then 2");
            }
        }

        if(number == 0) {return 0;}
        if(number == 1) {return 0;}
        if(number == 2) {return 1;}

        return hmath::tribonacci(number - 1) + hmath::tribonacci(number - 2) + hmath::tribonacci(number - 3);
    }

}