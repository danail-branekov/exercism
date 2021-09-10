#include "armstrong_numbers.h"
#include <math.h>

bool is_armstrong_number(int candidate){
    int digitsCount = floor(log10(candidate)) + 1;

    int computedResult = 0;
    int candidateLeftover = candidate;

    while(candidateLeftover > 0){
        int currentDigit = candidateLeftover%10;
        candidateLeftover /= 10;
        int intermediateResult = pow(currentDigit, digitsCount);
        computedResult += intermediateResult;
    }

    return computedResult == candidate;
}
