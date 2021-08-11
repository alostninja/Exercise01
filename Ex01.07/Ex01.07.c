#include "Ex01.07.h"

int main()
{
    RecursivePrintRead();
    return 0;
}

void RecursivePrintRead()
{
    int number;
    scanf_s("%d", &number);
    if (number != 0)
    {
        RecursivePrintRead();
    }
    printf_s("%d ", number);
}