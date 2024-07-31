#include <stdio.h>
#include <stdlib.h>

int multbytwo(int);
int square(int);
int factorial(int);
int sumnum(int [], int);
int randrange(int);
int randrange2(int, int);
void printnchars(int, int);

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

int sumnum(int a[], int n)
{
    int i;
	int sum = 0;
	for(i = 0; i < n; i = i + 1)
		sum = sum + a[i];
	return sum;
}

int randrange(int n)
{
    return rand() / (RAND_MAX / n + 1) + 1;
}

int randrange2(int n, int m)
{
    return rand() / (RAND_MAX / (n - m + 1) + 1) + m; 
}

void printnchars(int ch, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%c", ch);
    }
}