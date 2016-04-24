#ifndef LINKEDLIST_H
#define	LINKEDLIST_H

struct ListNode {
    int value;
    ListNode *next;
};

struct List {
    ListNode *head;
    ListNode *tail;
    int count;
};

// General operations
List* newList();
ListNode* newElement(int value);
bool hasElements(List *l);
void push_front(List *l, int value);
void push_back(List *l, int value);
void print(List *l);
void fillWithRandomNumbers(List *l, int length, int minValue, int maxValue);
void clearList(List *l);

// Search
ListNode* linearSearch(List *l, int search_value);
ListNode* selfOrganizingSearch(List *l, int search_value);

// Sorting
bool isSorted(List* l);
void insertSorted(List *l, int value);
List* insertionSort(int *array, int length);

#endif