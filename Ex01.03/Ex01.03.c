#include "Ex01.03.h"

int main()
{
    char *demoString = "I am 23 characters long";
    printf("%d", strlen(demoString));
}

int strlen(char *string) 
{
    char *stringIterator = string;
    while (stringIterator[0] != '\0')
    {
        ++stringIterator;
    }
    return stringIterator - string;
}