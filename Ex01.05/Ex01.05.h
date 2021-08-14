#ifndef EX5
#define EX5

#include <stdio.h>

/// @file Ex01.05.h

/**
* Checks if a given integer is a valid ID using the Luhn algorithm
*/
void CheckID(int enteredNumber);

/**
* Given an 8-digit integer, returns an array with each digit
*/
int *SeperateInteger9(int integer);

/**
* Given an integer and position, returns the digit in the specific position
*/
int GetDigit(int integer, int position);

/**
* Calculates the sum of digits in an integer array, based off the Luhn algorithm
*/
int LuhnSum(int *intArray);

/**
* Helper function to calculate exponents
*/
int Exponent(int base, int power);
#endif