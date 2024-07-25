#include <stdio.h>

int main()
{
	int i;
	int cubes[11];	/* [0..10]; [0] ignored */
	/* fill array: */
	for(i = 1; i <= 10; i = i + 1)
		cubes[i] = i * i * i; /* changed from squares to cubes */ 
	/* print table: */
	printf("n\tcubes\n");
	for(i = 1; i <= 10; i = i + 1)
		printf("%d\t%d\n", i, cubes[i]);
	return 0;
}


/*Modify the program so that it also declares and fills in a cubes array containing the cubes (third powers) of the numbers 1-10, and prints them out in a third column. */
