/*Modify the dice-rolling program (Sec. 4.1) so that it computes the average of all the rolls of the pair of dice. Remember that integer division truncates, so you'll have to declare some of your variables as float or double.

For extra credit, also compute the standard deviation, which can be expressed as

    sqrt((sum(x*x) - sum(x)*sum(x)/n) / (n - 1)) 

(where the notation sum(x) indicates summing all values of x, as usually expressed with the Greek letter sigma; there is not such a sum() function in C!) If you put the line

	#include <math.h>

at the top of the file, you'll be able to call sqrt(). */

#include <stdio.h>
#include <math.h>

int main(){
	int i;
	int d1, d2;
	int a[13];	/* uses [2..12] */
	float avg, SD;

	for(i = 2; i <= 12; i++)
		a[i] = 0;

	for(i = 0; i < 100; i++)
		{
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
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