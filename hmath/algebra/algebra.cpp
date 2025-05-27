#include "algebra.h"

namespace hmath {
    double abs(double number) {
        if(number < 0) {
            return (number * -1);
        }
        return number;
    }

    double pow(double number, int exponent, std::optional<int> modulus) {
        double result = number; 
        
        for(int i = 0; i < exponent; i++) {
            result *= number;
            
            if(modulus){
                TODO: "Make it able to take modulus of float";
                result = static_cast<int>(result) % modulus.value();
            }
        }

        return result;
    }

    double sqrtHerons(double number) {
        double x = number, prev;
        const double tolerance = 1e-10;

        while( hmath::abs(x - prev) > tolerance) {
            prev = x;
            x = 0.5 * (x + number / x);
        }

        return x;
    }   
}