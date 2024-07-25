#include <stdio.h>

void printnchars(int, int);

main()
{
    int i;

    for(i = 1; i <= 10; i = i + 1)
		{
            printnchars('*', i);
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