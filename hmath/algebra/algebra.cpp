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

    // TODO: Make it take non int exponent numbers
    double doublePow(double number, int exponent, std::optional<double> modulus) {
        double result = number;

        for(int i = 0; i < exponent; i++) {
            result *= number;

            if(modulus) {
                result = result - modulus.value() * hmath::floor(result/modulus.value());
            }
        }

        return result;
    }

    double intPow(int number, int exponent, std::optional<int> modulus) {
        double result = number; 
        
        for(int i = 0; i < exponent; i++) {
            result *= number;
            
            if(modulus) {
                result = static_cast<int>(result) % modulus.value();
            }
        }

        return result;
    }

    double sqrtHerons(double number) {
        if(number < 0) {return -1;} // returns -1 to indicate mistake
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