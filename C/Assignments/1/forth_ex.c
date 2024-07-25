#include <stdio.h>

void printnchars(int, int);

main()
{
    int i, j;

    for(i = 1; i <= 10; i = i + 1)
		{
            for(j = 1; j <= i; ++j) {
                printnchars('*', j);
            }
            printf("\n");
		}
    return 0;
}

void printnchars(int ch, int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%c", ch);
    }
}