#include <stdio.h>

int printsquare(int);

int main()
{
    int i;
	for(i = 1; i <= 10; i = i + 1)
		{
		printsquare(i);
		printf("\n");
		}
	return 0;
}

int printsquare(int n)
{
    int i, j;
	for(j = 0; j < n; j = j + 1)
		printf("*");
	printf("\n");
	for(i = 0; i < n-2; i = i + 1)
		{
		printf("*");
		for(j = 0; j < n-2; j = j + 1)
			printf(" ");
		if(n > 1)
			printf("*\n");
		}
	if(n > 1)
		{
		for(j = 0; j < n; j = j + 1)
			printf("*");
		printf("\n");
		}
	return 0;
}