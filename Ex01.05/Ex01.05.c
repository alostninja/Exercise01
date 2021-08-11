#include "Ex01.05.h"

int main()
{
    int enteredNumber;
    scanf_s("%d", &enteredNumber);

    CheckID(enteredNumber);
    return 0;
}

void CheckID(int enteredNumber)
{
    int *intArray = SeperateInteger9(enteredNumber);

    //Luhn Algorithm
    if (LuhnSum(intArray) % 10 == 0)
    {
        printf("ID is valid");
    }
    else
    {
        printf("ID is invalid");
    }
}

int *SeperateInteger9(int integer)
{
    int static intArray[9];
    for (int i = 0; i < 9; ++i)
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

int LuhnSum(int intArray[]) 
{
    int sumOfDigits = 0;
    for (int i = 0; i < 9; ++i)
    {
        if (i % 2 == 1) //odd postitioned digits get doubled
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