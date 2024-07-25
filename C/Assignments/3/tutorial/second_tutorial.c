#include <stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 10; i = i + 1)
		{
		for(j = 1; j <= 10; j = j + 1)
			{
			if((i + j) % 2 == 0)
				printf(" . ");
			else	printf(" / ");
			}
		printf("\n");
		}
	return 0;
}

/*Why are there parentheses around i + j in the expression (i + j) % 2 ? What if they were left out?
Answer: Because of precedence, if they were to be left out then the function would calculate the remainder of j instead of i + j*/ 
