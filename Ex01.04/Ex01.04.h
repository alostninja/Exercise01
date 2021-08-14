#ifndef EX4
#define EX4

#include <stdio.h>

/// @file Ex01.04.h

/**
* Prints a diamond, starting with 1 star on top line, and continuing to baseStarCount number of stars in the middle line
* Returns -1 if an even number is passed in.
*/
int PrintDiamond(int baseStarCount);

/**
* Prints out a line of spaceCount spaces, and starCount stars, and then a newline
* @param spaceCount Number of spaces
* @param starCount Number of stars
*/
void PrintLine(int spaceCount, int starCount);

/**
* Prints a single character multiple times
* @param character Character to repeat
* @param charCount Number of times to repeat
*/
void PrintMultiple(char character, int charCount);
#endif