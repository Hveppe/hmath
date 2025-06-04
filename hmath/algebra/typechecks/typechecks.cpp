#include "typechecks.h"

namespace hmath {
    // type checks
    bool isEven(int number) {
        return number % 2 == 0;
    }

    bool isOdd(int number) {
        return number % 2 == 1;
    }

    bool isPrime(int number) {
        if(number < 2) {
            return false;
        }

        for(int i = 2; i < hmath::floor(hmath::logPow(number, 0.5)) + 1; i++) {
            if(number % i == 0) {
                return false;
            } 
        }
        return true;
    }
}