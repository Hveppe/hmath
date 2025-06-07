#include "statistics.h"

namespace hmath {
    // double input
    double average(std::vector<double> numbers) {
        double result = 0;

        for(double i : numbers) {
            result += i;
        }

        return result / numbers.size();
    }

    double median(std::vector<double> numbers) {
        std::sort(numbers.begin(), numbers.end());
        size_t size = numbers.size();
        
        if(size % 2 == 1) {
            return numbers[size/2];
        }
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    }

    double variance(std::vector<double> numbers) {
        double result = 0.0;
        double average = hmath::average(numbers);

        for(double number : numbers) {
            double delta = number - average;
            result += delta * delta;
        }

        return result / (numbers.size() - 1);
    }

    // int input
    double average(std::vector<int> numbers) {
        double result = 0;

        for(int i : numbers) {
            result += i;
        }

        return result / numbers.size();
    }

    double median(std::vector<int> numbers) {
        std::sort(numbers.begin(), numbers.end());
        size_t size = numbers.size();
        
        if(size % 2 == 1) {
            return numbers[size/2];
        }
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0;
    }

    double variance(std::vector<int> numbers) {
        double result = 0.0;
        double average = hmath::average(numbers);

        for(int number : numbers) {
            double delta = number - average;
            result += delta * delta;
        }

        return result / (numbers.size() - 1);
    }
}