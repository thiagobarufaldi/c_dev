/*Write either the function
	randrange(int n)
which returns random integers from 1 to n, or the function
	int randrange2(int m, int n)
which returns random integers in the range m to n. Use your function to streamline the dice-rolling program a bit.
The header file <stdlib.h> defines a constant, RAND_MAX, which is the maximum number returned by the rand() function. A better way of reducing the range of the rand() function is like this:
	rand() / (RAND_MAX / N + 1)
(where N is the range of numbers you want).*/
#include <stdio.h>
#include <math.h>

extern int randrange2(int n, int m);

int main() {
    int i;
	int d1, d2;
	int a[13];	/* uses [2..12] */
	float avg, SD;

	for(i = 2; i <= 12; i++)
		a[i] = 0;

	for(i = 0; i < 100; i++)
		{
		d1 = randrange2(1, 7);
		d2 = randrange2(1, 7);
        a[d1 + d2] = a[d1 + d2] + 1;
		}

	for(i = 2; i <= 12; i++)
	{
		printf("%d: %d\n", i, a[i]);
		avg += a[i];
		SD += pow(a[i] - (avg / 10), 2);
	}
	
	printf("Average: %f\n", avg / 12);
	printf("Standard Variation: %f\n", sqrt(SD));

	return 0;

}