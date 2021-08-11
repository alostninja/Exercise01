#pragma once

#include <stdio.h>

/// @file Ex01.08.h

/**
 * Reads number input from user
 * @return List of 2 lowest and highest numbers entered once a 0 is entered
*/
int *SecondMostExtremeNums();

/**
* Reevaluates the most extreme numbers in 'extremes' array, given newNumber
*/
void* CalculateExtremes(int newNumber, int *extremes);