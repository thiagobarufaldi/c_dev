#include <stdio.h>

void printnchars(int, int);

int main()
{
    printnchars('c', 3);

    return 0;
}

void printnchars(int ch, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%c\n", ch);
    }
}