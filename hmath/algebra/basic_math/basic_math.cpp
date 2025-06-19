#include "basic_math.h"

namespace hmath {
    // min and max functions
    double min(double a, double b) {
        return (a < b) ?  a : b;
    }

    double max(double a, double b) {
        return (a > b) ?  a : b;
    }

    double min(std::vector<double> numbers) {
        double result = numbers[0];

        for(size_t i = 1; i < numbers.size(); i++) {
            if(result > numbers[i]) {
                result = numbers[i];
            }
        }

        return result;
    }

    double max(std::vector<double> numbers) {
        double result = numbers[0];

        for(size_t i = 1; i < numbers.size(); i++) {
            if(numbers[i] > result) {
                result = numbers[i];
            }
        }

        return result;
    }

    int min(std::vector<int> numbers) {
        double result = numbers[0];

        for(size_t i = 1; i < numbers.size(); i++) {
            if(result > numbers[i]) {
                result = numbers[i];
            }
        }

        return result;
    }

    int max(std::vector<int> numbers) {
        int result = numbers[0];

        for(size_t i = 1; i < numbers.size(); i++) {
            if(numbers[i] > result) {
                result = numbers[i];
            }
        }

        return result;
    }

    // sum functions
    double sum(std::vector<double> numbers, double start) {
        double sum = start;

        for(double number : numbers) {
            sum += number;
        }

        return sum;
    }

    double sum(std::vector<int> numbers, double start) {
        double sum = start;

        for(int number : numbers) {
            sum += number;
        }

        return sum;
    }

    int sum(std::vector<int> numbers, int start) {
        int sum = start;

        for(int number : numbers) {
            sum += number;
        }

        return sum;
    }

    // other functions
    double clamp(double value, double minValue, double maxValue) {
        return hmath::max(minValue, hmath::min(value, maxValue));
    }

    double sign(double number) {
        return (number > 0) - (number < 0);
    }

    void swap(double &a, double &b) {
        double temp = a;
        a = b;
        b = temp;
    }

    std::pair<int, double> intAndFracParts(double number) {
        std::pair<int, double> result = {hmath::floor(number), hmath::fmod(number, 1)};
        return result;
    }
}