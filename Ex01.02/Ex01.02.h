#ifndef EX2
#define EX2

#include <stdio.h>

/// @file Ex01.02.h

char MAX_UPPER_CASE = 'Z';
int CAPITAL_OFFSET = 'a' - 'A';

/**
* Reads a single character and prints it.
* Returns 0 if letter 'q' is entered.
*/
int PrintCapitalizedChar();

/**
* Given a character, returns the character in its capital format
* @param char Character to be capitalized
* @return Capitalized character
*/
char Capitalized(char character);
#endif