#include "Ex01.01.h"

int main()
{
    while (readAndPrintChar());
    return 0;
}

int readAndPrintChar() 
{
    int result = 1; //good input
    int character = getchar();
    if (character == 'Q' || character == 'q') result = 0;
    else 
    {
        putchar(character);
    }
    return result;
}