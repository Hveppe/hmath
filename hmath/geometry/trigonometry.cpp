#include "geometry.h"

namespace hmath {
    // Sinus made with Taylor series
    double sin(double x, int terms) {
        // Convert x from degres to radians
        x = hmath::degreeToRadian(x);
        
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
        x = hmath::degreeToRadian(x);
        
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

    double arcSin(double x) {
        if(x < -1.0 || 1.0 < x) {throw std::domain_error("Input out of domain for arcsinus");}

        // Special cases:
        if (x == 1.0) {return 90;}
        if (x == -1.0) {return -90.0;}

        double tolerance = 10e-10, y = x;
        while(true) {
            double f = hmath::sin(y) - x;
            double df = hmath::cos(y);
            if (std::abs(f) < tolerance) return y;
            y = y - (f / df);
        }
    }

    double arcCos(double x) {
        if(x < -1.0 || 1.0 < x) {throw std::domain_error("Input out of domain for arccosinus");}

        // Special cases:
        if (x == 1.0) {return 0.0;}
        if (x == -1.0) {return 180.0;}

        double tolerance = 10e-10, y = x;
        while(true) {
            double f = hmath::cos(y) - x;
            double df = -hmath::sin(y);
            if (std::abs(f) < tolerance) return y;
            y = y - (f / df);
        }
    }
}