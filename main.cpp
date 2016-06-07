#include "Array.h"
#include "BinaryTree.h"
#include "LinkedList.h"
#include "Numerics.h"
#include <iostream>

using namespace std;

int main() {
    int *array = new int[99999999];
    fillWithRandomNumbers(array, 99999999, -999999, 999999);
    
    cout << "Starting" << endl;
    quickSort(array, 0, 99999999);
    cout << "Ending" << endl;
    
    delete[] array;
}