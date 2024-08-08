#include <stdio.h>
#include <ctype.h>

int myatoi(char[]);
int mygetline(char[], int);

int myatoi(char str[])
{
	int i;
	int retval = 0;
    char m = '-';

	for(i = 0; str[i] != '\0'; i = i + 1)
		{
		if(!isspace(str[i]))
			break;
		}

	for(; str[i] != '\0'; i = i + 1)
		{
		if(!isdigit(str[i]) || m)
			break;
		retval = 10 * retval + (str[i] - '0');
		}

	return retval;
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