#include "divisors.h"

namespace hmath {
    // divisor functions
    std::vector<int> divisors(int number) {
        std::vector<int> divList;

        for(int i = 1; i < number + 1; i++) {
            if(hmath::isDivisor(number, i)) {
                divList.push_back(number/i);
            }
        }

        return divList;
    }

    int countDivisors(int number) {
        return hmath::divisors(number).size();
    }

    int gcd(int a, int b) {
        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        return a;
    }

    int lcm(int a, int b) {
        if (a == 0 || b == 0) return 0;
        return hmath::abs(a * b) / hmath::gcd(a, b);
    }
}