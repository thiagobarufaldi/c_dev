#include <stdio.h>

int main()
{
    int i;
    int factorial = 1;

    for(i = 1; i <= 7; ++i)
    {
        factorial *= i;
        printf("%d %d\n", i, factorial);
    }

    return 0;
}