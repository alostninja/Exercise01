#include "Ex01.04.h"

int main()
{
    return PrintDiamond(13);
}

int PrintDiamond(int baseStarCount) 
{
    if (baseStarCount % 2 == 0)
    {
        return -1;
    }
    for (int i = 1; i < baseStarCount; i += 2)
    {
        PrintLine((baseStarCount - i) / 2, i);
    }
    for (int i = baseStarCount; i > 0; i -= 2)
    {
        PrintLine((baseStarCount - i) / 2, i);
    }
    return 0;
}

void PrintLine(int spaceCount, int starCount)
{
    PrintMultiple(' ', spaceCount);
    PrintMultiple('*', starCount);
    putchar('\n');
}

void PrintMultiple(char character, int charCount) 
{
    for (int i = 0; i < charCount; ++i)
    {
        putchar(character);
    }
}