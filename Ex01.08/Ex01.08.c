#include "Ex01.08.h"

int main()
{
    int *extremeNumbers = SecondMostExtremeNums();

    printf_s("%s %d\n", "Second largest number: ", extremeNumbers[1]);
    printf_s("%s %d\n", "Second smallest number:", extremeNumbers[2]);
}

int *SecondMostExtremeNums()
{
    int static extremes[4] = {0,0,0,0};
    int number;
    while (1)
    {
        scanf_s("%d", &number);
        if (number == 0) break;
        CalculateExtremes(number, &extremes);
    }
    return &extremes;
}

void *CalculateExtremes(int newNumber, int *extremes)
{
    if (newNumber < extremes[0] || extremes[0] == 0)
    {
        extremes[1] = extremes[0];
        extremes[0] = newNumber;
    }
    else if (newNumber < extremes[1] || extremes[1] == 0)
    {
        extremes[1] = newNumber;
    }
    if (newNumber > extremes[3] || extremes[3] == 0)
    {
        extremes[2] = extremes[3];
        extremes[3] = newNumber;
    }
    else if (newNumber > extremes[2] || extremes[2] == 0)
    {
        extremes[2] = newNumber;
    }
}