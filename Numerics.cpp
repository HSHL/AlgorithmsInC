#include "Numerics.h"

bool isPrime(unsigned long n) {
    if (n < 2)
        return false;
    
    if (n == 2)
        return true;
    
    for (unsigned long i=2; i<=n/2; i++) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

void getFibonacciNumbers(int *array, int count) {
    for (int i=0; i<count; i++) {
        if (i==0 || i==1)
            array[i] = 1;
        else
            array[i] = array[i-1] + array[i-2];
    }
}