#include <stdio.h>

int mygetchar(char);
int mygetline(char[], int);

int mygetchar(char){
    int c;

	while((c = getchar())!= EOF)
		{
		putchar(c);
		c = getchar();
		}

	return 0;
}

int mygetline(char line[], int max)
{
    int nch = 0;
    int c;
    max = max - 1;			/* leave room for '\0' */

    while((c = getchar()) != EOF)
        {
        if(c == '\n')
            break;

        if(nch < max)
            {
            line[nch] = c;
            nch = nch + 1;
            }
        }

    if(c == EOF && nch == 0)
        return EOF;

    line[nch] = '\0';

    return nch;
}