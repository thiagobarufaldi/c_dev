#include <stdio.h>
#include <stdlib.h>	/* for atof() */
#include <string.h>

#define MAXLINE 100

extern int mygetline(char [], int);

int main()
{
	double balance = 0.0;
	char line1[MAXLINE], line2[MAXLINE];

	while(mygetline(line1, MAXLINE) > 0)
		{
		mygetline(line2, MAXLINE);

		if(strcmp(line1, "deposit") == 0)
			balance += atof(line2);
		else if(strcmp(line1, "check") == 0)
			balance -= atof(line2);
		else	{
			printf("bad data line: not \"check\" or \"deposit\"\n");
			continue;
			}

		printf("balance: %.2f\n", balance);
		}
	
	return 0;
}