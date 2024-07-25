#include <stdio.h>

extern int square(int);

int main()
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", square(i));
    }

    return 0;
}