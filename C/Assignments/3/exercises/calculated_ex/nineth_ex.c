#include <stdio.h>
#include <math.h>


extern int randrange(int);
extern void printnchars(int, int);

int main() {
    int i;
	int d1, d2;
	int a[13];	/* uses [2..12] */
	float avg, SD;

	for(i = 2; i <= 12; i++)
		a[i] = 0;

	for(i = 0; i < 100; i++)
		{
		d1 = randrange(7);
		d2 = randrange(7);
        a[d1 + d2] = a[d1 + d2] + 1;
		}

	for(i = 2; i <= 12; i++)
	{
		printf("%d: %d\t", i, a[i]);
        printnchars('*', a[i]);
        printf("\n");
        avg += a[i];
		SD += pow(a[i] - (avg / 10), 2);
	}
	
	printf("Average: %f\n", avg / 12);
	printf("Standard Variation: %f\n", sqrt(SD));

	return 0;

}