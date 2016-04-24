#ifndef ARRAY_H
#define	ARRAY_H

// General operations:
void swap(int *array, int pos1, int pos2);
int findMinimumPosition(int *array, int start, int end);
void fillWithRandomNumbers(int *array, int length, int minValue, int maxValue);
void fillWithAscendingNumbers(int *array, int length);
void print(int *array, int count);
int getPositionOfFirstNumberLargerThan(int *array, int count, int number);

// Search:
int linearSearch(int *array, int size, int search_value);
int binarySearch(int *array, int size, int search_value);
int selfOrganizingSearch(int *array, int size, int search_value);
int fibonacciSearch(int *array, int size, int search_value);
int fibonacciSearchRecursive(int *array, int size, int search_value, int *fibonacci_numbers, int offset, int fib_idx);

// Sorting:
bool isSorted(int *array, int length);
void selectionSort(int *array, int length);
bool bubbleUp(int *array, int length);
void bubbleSort(int *array, int length);

#endif