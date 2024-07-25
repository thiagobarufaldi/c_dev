#include <stdio.h>

int main()
{
    int i;
    double s = 0;
    //or int s;

    for(i = 1; i <= 10; i = i + 1)
    {
        s += i * i;
    }
    printf("%f", s / 10);
    // printf("%d", s / 10) = 38

    return 0;
}