#include <iostream>
#include "LinkedList.h"
#include <stdlib.h>

List* newList() {
    List *l = new List;
    l->count = 0;
    l->head = NULL;
    l->tail = NULL;
    return l;
}

ListNode* newElement(int value) {
    ListNode *element = new ListNode;
    element->value = value;
    element->next = NULL;
    return element;
}

bool hasElements(List *l) {
    return l != NULL && l->head != NULL;
}

void push_front(List *l, int value) {
    if (l == NULL)
        return;
    
    ListNode *e = newElement(value);
    if (!hasElements(l)) {
        l->head = e;
        l->tail = e;
        l->count = 1;
    } else {
        e->next = l->head;
        l->head = e;
        l->count++;
    }
}

void push_back(List *l, int value) {
    if (l == NULL)
        return;
    
    ListNode *e = newElement(value);
    if (!hasElements(l)) {
        l->head = e;
        l->tail = e;
        l->count = 1;
    } else {
        l->tail->next = e;
        l->tail = e;
        l->count++;
    }
}

void print(List *l) {
    if (l == NULL)
        return;
    
    ListNode *e = l->head;
    while (e != NULL) {
        std::cout << e->value << std::endl;
        e = e->next;
    }
}

void fillWithRandomNumbers(List *l, int length, int minValue, int maxValue) {
    for (int i=0; i<length; i++) {
        push_front(l, rand() % (maxValue - minValue) + minValue);
    }
}

ListNode* linearSearch(List *l, int search_value) {
    if (l == NULL)
        return NULL;
    
    ListNode *e = l->head;
    while (e != NULL) {
        if (e->value == search_value)
            return e;
        
        e = e->next;
    }
    
    return NULL;
}

ListNode* selfOrganizingSearch(List *l, int search_value) {
    // To be implemented!
    return NULL;
}

bool isSorted(List* l) {
    if (l == NULL)
        return true;
    
    ListNode *e = l->head;
    while (e != NULL) {
        if (e->next != NULL && e->value > e->next->value)
            return false;
        
        e = e->next;
    }
    
    return true;
}

void insertSorted(List *l, int value) {
    if (l == NULL)
        return;
    
    if (l->head == NULL)
        push_front(l, value);
    else {
        ListNode *current = l->head;
        ListNode *last = NULL;
        
        while (current != NULL) {
            if (current->value > value) {
                if (last == NULL) {
                    push_front(l, value);
                    break;
                } else {
                    ListNode *nE = newElement(value);
                    last->next = nE;
                    nE->next = current;
                    l->count++;
                    break;
                }
            }

            last = current;
            current = current->next;
        }
        
        if (current == NULL) {
            push_back(l, value);
        }
    }
}

List* insertionSort(int *array, int length) {
    List *l = newList();
    for (int i=0; i<length; i++)
        insertSorted(l, array[i]);
    
    return l;
}

void clearList(List *l) {
    if (l == NULL)
        return;
    
    ListNode *e = l->head;
    ListNode *n;
    
    while (e != NULL) {
        n = e->next;
        delete e;
        e = n;
    }
}