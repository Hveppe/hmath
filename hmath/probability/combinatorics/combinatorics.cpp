#include "combinatorics.h"

namespace hmath {
    unsigned long long combinations(int total, int chosen) {
        if(total < chosen) {return 0;}
        if(chosen == 0 || total == chosen) {return 1;}

        // take advantage of symmetry
        if (chosen > total - chosen) {chosen = total - chosen;}

        unsigned long long result = 1;
        for(int i = 1; i <= chosen; i++) {
            result *= (total - (chosen - i));
            result /= i;
        }

        return result;
    }

    unsigned long long permutations(int total, int chosen) {
        if (chosen > total) {return 0;}

        unsigned long long result = 1;
        for(int i = 0; i < chosen; i++) {
            result *= (total - i);
        }

        return result;
    }
}
