#include "ArrayTest.h"
#include "Array.h"
#include "UnitTesting.h"
#include "LinkedList.h"
#include <cstdlib>
#include <iostream>
#include <time.h>

void fibonacciContains_Test() {
    int array[12] = {1, 3, 9, 12, 28, 29, 31, 38, 42, 118, 267, 312 };
    
    assertEqual(fibonacciSearch(array, 12, 3), 1, "3 is in array!");
    assertEqual(fibonacciSearch(array, 12, 31), 6, "31 is in array!");
    assertEqual(fibonacciSearch(array, 12, 312), 11, "312 is in array!");
    assertEqual(fibonacciSearch(array, 12, 709), -1, "709 is NOT in array!");
    assertEqual(fibonacciSearch(array, 12, -12), -1, "-12 is NOT in array!");
    
    std::cout << "SUCCESS: execution of Array::fibonacciSearch succesfull!" << std::endl;
}

void selectionSort_Test() {
    const int count = 1000;
    int *array = new int[count];
    fillWithRandomNumbers(array, count, -1000, +1000);
    assertFalse(isSorted(array, count), "Array should not be sorted!");
    selectionSort(array, count);
    assertTrue(isSorted(array, count), "Array should be sorted after selectionSort!");
    delete[] array;
    
    std::cout << "SUCCESS: execution of Array::selectionSort succesfull!" << std::endl;
}

void bubbleSort_Test() {
    const int count = 1000;
    int *array = new int[count];
    fillWithRandomNumbers(array, count, -1000, +1000);
    assertFalse(isSorted(array, count), "Array should not be sorted!");
    bubbleSort(array, count);
    assertTrue(isSorted(array, count), "Array should be sorted after bubbleSort!");    
    delete[] array;
    
    std::cout << "SUCCESS: execution of Array::bubbleSort succesfull!" << std::endl;
}

void isMaxHeap_Test() {
    int a[] = { 4, 2, 1 };
    assertTrue(isMaxHeap(a, 3), "Array should be maxheap!");

    int b[] = { 1, 4, 2 };
    assertFalse(isMaxHeap(b, 3), "Array should not be maxheap!");
    
    std::cout << "SUCCESS: execution of Array::isMaxHeap succesfull!" << std::endl;
}

void maxHeapify_Test() {
    int a[] = { 1, 4, 2 };
    maxHeapify(a, 3, 0);
    assertTrue(isMaxHeap(a, 3), "Array should be maxheap!");
    
    std::cout << "SUCCESS: execution of Array::maxHeapify succesfull!" << std::endl;
}

void buildMaxHeap_Test() {
    int a[] = { 1, 4, 2 };
    buildMaxHeap(a, 3);
    assertTrue(isMaxHeap(a, 3), "Array should be maxheap!");
    
    int b[] = { 1, 4, 2, 5, 9 };
    buildMaxHeap(b, 5);
    assertTrue(isMaxHeap(b, 3), "Array should be maxheap!");
    
    std::cout << "SUCCESS: execution of Array::buildMaxheap succesfull!" << std::endl;
}

void heapSort_Test() {
    int a[] = { 1, 4, 2, 5, 9 };
    heapSort(a, 5);
    assertTrue(isSorted(a, 5), "Array should be sorted after heapSort!");
    
    const int count = 1000;
    int *array = new int[count];
    fillWithRandomNumbers(array, count, -1000, +1000);
    assertFalse(isSorted(array, count), "Array should not be sorted!");
    heapSort(array, count);
    assertTrue(isSorted(array, count), "Array should be sorted after heapSort!");    
    delete[] array;
    
    std::cout << "SUCCESS: execution of Array::heapSort succesfull!" << std::endl;
}

void run_all_Array_Tests() {
    srand(time(NULL));
    
    std::cout << "Executing Tests for Array!" << std::endl;
    fibonacciContains_Test();
    selectionSort_Test();
    bubbleSort_Test();
    isMaxHeap_Test();
    maxHeapify_Test();
    buildMaxHeap_Test();
    heapSort_Test();
    std::cout << "Execution done!" << std::endl << std::endl;
}