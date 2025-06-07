#include "statistics.h"

namespace hmath {
    // double input
    double average(const std::vector<double> &numbers) {
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

    double variance(const std::vector<double> &numbers,  bool sampleCase) {
        double result = 0.0;
        double average = hmath::average(numbers);

        for(double number : numbers) {
            double delta = number - average;
            result += delta * delta;
        }

        if(sampleCase) {
            return result / (numbers.size() - 1);
        } else {
            return result / numbers.size();
        }
    }

    int occurrence(const std::vector<double> &numbers, const double &chosenNumber) {
        int result = 0;

        for(double number : numbers) {
            if(number == chosenNumber) {
                result += 1;
            }
        }

        return result;
    }

    double frequency(const std::vector<double> &numbers, const double &chosenNumber) {
        return (hmath::occurrence(numbers, chosenNumber) / numbers.size()) * 100;
    }

    double mode(std::vector<double> numbers) {
        std::sort(numbers.begin(), numbers.end());

        int highestCount = 1, currentCount = 1;
        double highest = numbers[0];

        for (size_t i = 1; i < numbers.size(); ++i) {
            if(numbers[i] != numbers[i - 1]) {
                if(highestCount < currentCount) {
                    highest = numbers[i - 1];
                    highestCount = currentCount;
                }

                currentCount = 1;
            } else {
                currentCount++;
            }
        }

        if (currentCount > highestCount) {
            highest = numbers.back();
        }

        return highest;
    }

    // int input
    double average(const std::vector<int> &numbers) {
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

    double variance(const std::vector<int> &numbers,  bool sampleCase) {
        double result = 0.0;
        double average = hmath::average(numbers);

        for(int number : numbers) {
            double delta = number - average;
            result += delta * delta;
        }

        if(sampleCase) {
            return result / (numbers.size() - 1);
        } else {
            return result / numbers.size();
        }
    }

    int occurrence(const std::vector<int> &numbers, const int &chosenNumber) {
        int result = 0;

        for(int number : numbers) {
            if(number == chosenNumber) {
                result += 1;
            }
        }

        return result;
    }

    double frequency(const std::vector<int> &numbers, const int &chosenNumber) {
        return (hmath::occurrence(numbers, chosenNumber) / numbers.size()) * 100;
    }

    int mode(std::vector<int> numbers) {
        std::sort(numbers.begin(), numbers.end());

        int highestCount = 1, currentCount = 1;
        int highest = numbers[0];

        for (size_t i = 1; i < numbers.size(); ++i) {
            if(numbers[i] != numbers[i - 1]) {
                if(highestCount < currentCount) {
                    highest = numbers[i - 1];
                    highestCount = currentCount;
                }

                currentCount = 1;
            } else {
                currentCount++;
            }
        }

        if (currentCount > highestCount) {
            highest = numbers.back();
        }

        return highest;
    }
}