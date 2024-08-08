#include <stdio.h>
#include <stdlib.h>	/* for atoi() */

extern int mygetline(char [], int);
extern int myatoi(char[]);

int main()
{
	char inputline[100];
	float miles;
	float gallons;
	float mpg;

	for(;;)
		{
		printf("enter miles driven (0 to end):\n");
		mygetline(inputline, 100);
		miles = myatoi(inputline);

		if(miles == 0)
			break;

		printf("enter gallons used:\n");
		mygetline(inputline, 100);
		gallons = myatoi(inputline);

		mpg = miles / gallons;
		printf("You got %.2f mpg\n\n", mpg);
		}

	return 0;
}