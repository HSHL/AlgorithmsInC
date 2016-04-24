#include "NumericsTest.h"
#include "Numerics.h"
#include "LinkedListTest.h"
#include "UnitTesting.h"
#include <iostream>

void isPrime_Test() {
    assertTrue(isPrime(2), "2 is a prime!");
    assertTrue(isPrime(17), "17 is a prime!");
    assertTrue(isPrime(997), "997 is a prime!");
    assertFalse(isPrime(8), "8 is not a prime!");
    assertFalse(isPrime(998), "998 is not a prime!");
    assertFalse(isPrime(2715), "2715 is not a prime!");
            
    std::cout << "SUCCESS: execution of Numerics::isPrime succesfull!" << std::endl;
}

void getFibonacciNumbers_Test() {
    int *array = new int[20];
    getFibonacciNumbers(array, 20);
    assertEqual(1, array[0], "fib_1 == 1!");
    assertEqual(1, array[1], "fib_2 == 1!");
    assertEqual(55, array[9], "fib_10 == 55!");
    assertEqual(6765, array[19], "fib_20 == 6765!");
    
    std::cout << "SUCCESS: execution of Numerics::getFibonacciNumbers succesfull!" << std::endl;
}

void run_all_Numerics_Tests() {
    std::cout << "Executing Tests for Numerics!" << std::endl;
    isPrime_Test();
    getFibonacciNumbers_Test();
    std::cout << "Execution done!" << std::endl << std::endl;
}