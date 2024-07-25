#include <stdio.h>

extern int multbytwo(int);

int main()
{
    int i;

    for(i = 0; i <= 10; i++)
    {
        printf("%d\n", multbytwo(i));
    }

    return 0;
}