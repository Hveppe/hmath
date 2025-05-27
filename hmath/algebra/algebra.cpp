#include "algebra.h"

namespace hmath {
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
        double x = number;

        for(int i = 0; i < 1000; i++ ) {
            x = 0.5 * (x + number / x);
        }

        return x;
    }
}