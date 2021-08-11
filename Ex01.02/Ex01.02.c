#include "Ex01.02.h"

int main()
{
    while (PrintCapitalizedChar());
    return 0;
}

int PrintCapitalizedChar() 
{
    int result = 1; //good input
    char character = getchar();
    if (character == 'Q' || character == 'q') result = 0;
    else
    {
        putchar(Capitalized(character));
    }
    return result;
}

char Capitalized(char character) 
{
    if (character > MAX_UPPER_CASE && character != '\n')
    {
        character -= CAPITAL_OFFSET;
    }
    return character;
}