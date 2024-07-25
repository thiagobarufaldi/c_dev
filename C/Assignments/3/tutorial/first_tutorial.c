#include <stdio.h>

int main()
{
	int i, j;
	/* print header line: */
	printf("  ");
	for(j = 1; j <= 10; j = j + 1)
		printf(" %3d", j);
	printf("\n");
	/* print table: */
	for(i = 1; i <= 10; i = i + 1)
		{
		printf("%2d", i);
		for(j = 1; j <= 10; j = j + 1)
			printf(" %3d", i * j); // changed from + (addition) to * (multiplication)
		printf("\n");
		}
	return 0;
}

// Assignment: Make a simple modification to the program to print a multiplication table, or a subtraction table.