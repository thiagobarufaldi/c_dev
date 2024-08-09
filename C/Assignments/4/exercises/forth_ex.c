#include <stdio.h>
#include <stdlib.h>	
#include <math.h>

extern int mygetline(char[], int);

int main()
{
    char line[100];
    int x;
    double sum = 0.0, sumsq = 0.0;
	int n = 0;
	double mean, stdev;

    while(mygetline(line, 100) != EOF)
		{
		x = atoi(line);
		sum += x;
		sumsq += x * x;
		n += 1;
		}

	mean = sum / n;
	stdev = sqrt((sumsq - sum * sum / n) / (n - 1));

	printf("mean: %f\n", mean);
	printf("std. dev.: %f\n", stdev);

    return 0;
}