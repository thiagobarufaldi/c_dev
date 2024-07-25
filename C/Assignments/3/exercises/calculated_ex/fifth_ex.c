/*Write a function to compute the factorial of a number, and use it to print the factorials of the numbers 1-7. (Extra credit: print the factorials of the numbers 1-10.)*/

#include <stdio.h>

extern int factorial(int);

int main()
{
    int i = 10;

    factorial(i);

    return 0;
}