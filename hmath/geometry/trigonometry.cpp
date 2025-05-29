#include "geometry.h"

namespace hmath {
    // Sinus made with Taylor series
    double sin(double x, int terms) {
        // Convert x from degres to radians
        x = hmath::degreToRadian(x);
        
        double result = 0.0, term = x;
        int sign = 1; // Starts with + sign

        for(int i = 0; i <= terms; i++) {
            result += sign * term;
            term *= x * x / ((2 * i + 2) * (2 * i + 3)); // Update term
            sign *= -1; // Flip sign between - and +
        }

        return result;
    }

     // Cosinus made with Taylor series
    double cos(double x, int terms) {
        // Convert x from degres to radians
        x = hmath::degreToRadian(x);
        
        double result = 0.0, term = 1.0;
        int sign = 1; // Starts with + sign

        for(int i = 0; i <= terms; i++) {
            result += sign * term;
            term *= x * x / ((2 * i + 1) * (2 * i + 2)); // Update term
            sign *= -1; // Flip sign between - and +
        }

        if(hmath::abs(result) < 1e-15){
            result = 0.0;
        }

        return result;
    }

    double tan(double x, int terms) {
        double sinValue = hmath::sin(x, terms);
        double cosValue = hmath::cos(x, terms);

        if(hmath::abs(cosValue) < 1e-15){
            throw std::overflow_error("cos value is zero");
        }

        return sinValue / cosValue;
    }
}