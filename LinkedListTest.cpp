#include "LinkedListTest.h"
#include "LinkedList.h"
#include "UnitTesting.h"
#include "Array.h"
#include <iostream>

void newList_Test() {
    List *l = newList();
    assertTrue(l->head == NULL, "Head of new List should be NULL!");
    assertTrue(l->tail == NULL, "Tail of new List should be NULL!");
    assertEqual(0, l->count, "Element count of new List should be 0!");
    clearList(l);
            
    std::cout << "SUCCESS: execution of LinkedList::newList succesfull!" << std::endl;
}
    
void newElement_Test() {
    ListNode *n = newElement(5);
    assertTrue(n->next == NULL, "Next of new ListNode should be NULL!");
    assertEqual(5, n->value, "Value of new ListNode should be 5!");
    delete n;
    
    std::cout << "SUCCESS: execution of LinkedList::newElement succesfull!" << std::endl;
}

void hasElements_Test() {
    assertFalse(hasElements(NULL), "Empty list should not have elements!");
    
    List *l = newList();
    assertFalse(hasElements(l), "Empty list should not have elements!");
    
    push_front(l, 5);
    assertTrue(hasElements(l), "List should have elements!");
    clearList(l);
    
    std::cout << "SUCCESS: execution of LinkedList::hasElements succesfull!" << std::endl;
}

void push_front_Test() {
    List *l = newList();
    push_front(l, 5);
    assertEqual(l->head->value, 5, "Head of list should show a value of 5!");
    assertEqual(l->tail->value, 5, "Tail of list should show a value of 5!");
    
    push_front(l, 10);
    assertEqual(l->head->value, 10, "Head of list should show a value of 10!");
    assertEqual(l->tail->value, 5, "Tail of list should show a value of 5!");
    clearList(l);
    
    std::cout << "SUCCESS: execution of LinkedList::push_front succesfull!" << std::endl;
}

void push_back_Test() {
    List *l = newList();
    push_back(l, 5);
    assertEqual(l->head->value, 5, "Head of list should show a value of 5!");
    assertEqual(l->tail->value, 5, "Tail of list should show a value of 5!");
    
    push_back(l, 10);
    assertEqual(l->head->value, 5, "Head of list should show a value of 5!");
    assertEqual(l->tail->value, 10, "Tail of list should show a value of 10!");
    clearList(l);
    
    std::cout << "SUCCESS: execution of LinkedList::push_back succesfull!" << std::endl;
}

void pop_front_Test() {
    // To be implemented!
    
    std::cout << "SUCCESS: execution of LinkedList::pop_front succesfull!" << std::endl;
}

void linearSearch_Test() {
    // To be implemented!
    
    std::cout << "SUCCESS: execution of LinkedList::linearSearch succesfull!" << std::endl;
}

void isSorted_Test() {
    List *l = newList();
    push_front(l, 1);
    push_front(l, 3);
    assertFalse(isSorted(l), "List should not be sorted!");
    clearList(l);
    
    l = newList();
    push_front(l, 17);
    push_front(l, 5);
    push_front(l, 2);
    assertTrue(isSorted(l), "List should be sorted!");
    clearList(l);
    
    std::cout << "SUCCESS: execution of LinkedList::isSorted succesfull!" << std::endl;
}

void insertionSort_Test() {
    const int count = 1000;
    int *array = new int[count];
    fillWithRandomNumbers(array, count, -1000, 1000);
    assertFalse(isSorted(array, count), "Array should not be sorted before insertionSort!");
    List *l = insertionSort(array, count);
    assertEqual(count, l->count, "List count is invalid after insertionSort!");
    assertTrue(isSorted(l), "List should be sorted after insertionSort!");
    delete[] array;
    clearList(l);
    
    std::cout << "SUCCESS: execution of LinkedList::insertionSort succesfull!" << std::endl;
}

void run_all_LinkedList_Tests() {
    std::cout << "Executing Tests for LinkedList!" << std::endl;
    newList_Test();
    newElement_Test();
    hasElements_Test();
    push_front_Test();
    push_back_Test();
    linearSearch_Test();
    pop_front_Test();
    isSorted_Test();
    insertionSort_Test();
    std::cout << "Execution done!" << std::endl << std::endl;
}