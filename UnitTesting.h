#ifndef UNITTESTING_H
#define	UNITTESTING_H

#include <iostream>

void assertTrue(bool a, const char* error);
void assertFalse(bool a, const char* error);
void assertEqual(int a, int b, const char* error);
void assertEqual(double a, double b, const char* error);

#endif