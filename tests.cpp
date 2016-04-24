#include <cstdlib>
#include <iostream>
#include <time.h>
#include "NumericsTest.h"
#include "ArrayTest.h"
#include "LinkedListTest.h"
#include "BinaryTreeTest.h"

int main() {
    run_all_Numerics_Tests();
    run_all_Array_Tests();
    run_all_LinkedList_Tests();
    run_all_BinaryTree_Tests();
    return 0;
}