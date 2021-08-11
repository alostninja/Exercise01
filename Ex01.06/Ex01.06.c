#include "Ex01.06.h"

int main()
{
    int enteredNumber;
    printf_s("%s", "Enter 8-digit ID: ");
    scanf_s("%d", &enteredNumber);

    printf("Check digit: %d", FixID(enteredNumber));
    return 0;
}

int FixID(int enteredNumber)
{
    int result = 0;
    int *intArray = SeperateInteger8(enteredNumber);

    return 10 - (LuhnSum(intArray) % 10);
}

int *SeperateInteger8(int integer)
{
    int static intArray[8];
    for (int i = 0; i < 8; ++i)
    {
        intArray[i] = GetDigit(integer, i + 1);
    }
    return intArray;
}

int GetDigit(int integer, int position)
{
    int divisor = Exponent(10, position);

    //Remove all numbers before and after digit in 'position' spot
    return (integer % divisor) / (divisor / 10);
}

int LuhnSum(int *intArray)
{
    int sumOfDigits = 0;
    for (int i = 0; i < 8; ++i)
    {
        if (i % 2 == 0) //even postitioned digits get doubled
        {
            int doubledDigit = intArray[i] * 2;
            if (doubledDigit > 9) doubledDigit -= 9; //sum of digits (aka -9)
            sumOfDigits += doubledDigit;
        }
        else
        {
            sumOfDigits += intArray[i];
        }
    }
    return sumOfDigits;
}

int Exponent(int base, int power)
{
    int result = 1;
    for (int i = 0; i < power; ++i, result *= base);
    return result;
}