#include <stdio.h>

int multbytwo(int);
int square(int);
int factorial(int);

int multbytwo(int x)
{
	x = x * 2;
	return x;
}

int square(int x)
{
	x = x * x;
	return x;
}

int factorial(int x)
{
    int i;
    long factorial = 1;

    for(i = 1; i <= x; ++i)
    {
        factorial *= i;
        printf("%d %ld\n", i, factorial);
    }

    return 0;
}