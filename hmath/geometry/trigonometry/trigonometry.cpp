#include "trigonometry.h"

namespace hmath {
    // Sinus made with Taylor series
    double sin(double degrees, int terms) {
        // Convert x from degres to radians
        double x = hmath::degreeToRadian(degrees);
        
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
    double cos(double degrees, int terms) {
        // Convert to radians
        double x = hmath::degreeToRadian(degrees);

        // Normalize x to [-π, π] to improve convergence
        x = hmath::fmod(x + hmath::PI, 2 * hmath::PI);
        if (x < 0) x += 2 * hmath::PI;
        x -= hmath::PI;

        double result = 1.0;  // First term is 1
        double term = 1.0;

        for (int i = 1; i < terms; ++i) {
            term *= -x * x / ((2 * i - 1) * (2 * i));
            result += term;
        }

        // Threshold near-zero values
        if (hmath::isZero(result, 1e-14)) {
            result = 0.0;
        }

        return result;
    }
    
    double tan(double degrees, int terms) {
        double sinValue = hmath::sin(degrees, terms);
        double cosValue = hmath::cos(degrees, terms);

        if(hmath::abs(cosValue) < 1e-15){
            throw std::overflow_error("cos value is zero");
        }

        return sinValue / cosValue;
    }

    double arcSin(double x) {
        if (x < -1.0 || x > 1.0) {throw std::domain_error("Input out of domain for arcsinus");}

        if (x == 1.0) return 90.0;
        if (x == -1.0) return -90.0;

        double tolerance = 1e-10;
        double y = 45.0;  // Initial guess in degrees

        while (true) {
            double f = hmath::sin(y) - x;
            double df = hmath::cos(y);
            double delta = f / df;

            if (hmath::abs(delta) < tolerance) return y;

            y -= delta;
        }
    }

    double arcCos(double x) {
        if (x < -1.0 || x > 1.0) {throw std::domain_error("Input out of domain for arccosine");}

        // Special cases
        if (x == 1.0) return 0.0;
        if (x == -1.0) return 180.0;

        double tolerance = 1e-10;
        double y = 1.0;  // Initial guess in radians (roughly 60°)

        while (true) {
            double f = hmath::cos(hmath::radianToDegree(y)) - x;
            double df = -hmath::sin(hmath::radianToDegree(y));
            double delta = f / df;

            if (hmath::abs(delta) < tolerance) {
                // Convert final radian result to degrees
                double result = hmath::radianToDegree(y);
                
                // Threshold near-zero values
                if(hmath::abs(result) < 2e-6) {
                    result = 0.0;
                }

                return result;
            }

            y -= delta;
        }
    }

    double arcTan(double x) {
        double tolerance = 1e-10;
        double y = (hmath::abs(x) < 1.0) ? 0.0 : 45.0;;  // Initial guess in degrees

        while (true) {
            double f = hmath::tan(y, 15) - x;
            double df = 1.0 + hmath::tan(y, 15) * hmath::tan(y, 15); // Derivative of tan is 1 + tan^2(x)

            if (df == 0.0) {throw std::runtime_error("Derivative is zero in arcTan");}

            double delta = f / df;

            if (hmath::abs(delta) < tolerance) return y;

            y -= delta;
        }
    }
}