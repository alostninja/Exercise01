#ifndef EX6
#define EX6

#include <stdio.h>

/// @file Ex01.06.h

/**
* Given 8-digit ID, calculates check digit for valid 9-digit ID using the Luhn algorithm.
* Returns check digit for valid 9-digit ID
*/
int FixID(int enteredNumber);

/**
* Given an 8-digit integer, returns an array with each digit
*/
int* SeperateInteger8(int integer);

/**
* Given an integer and position, returns the digit in the specific position
*/
int GetDigit(int integer, int position);

/**
* Calculates the sum of digits in an integer array, based off the Luhn algorithm
*/
int LuhnSum(int* intArray);

/**
* Helper function to calculate exponents
*/
int Exponent(int base, int power);
#endif