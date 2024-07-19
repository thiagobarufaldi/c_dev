#include <stdio.h>

int main()
{
	int i;
	int fibonacci = 1;
	int prevfib = 0;
	int tmp;

	for(i = 0; i <= 10; i = i + 1)
		{
		printf("%d   %d\n", i, fibonacci);
		tmp = fibonacci;
		fibonacci = fibonacci + prevfib;
		prevfib = tmp;
		}

	return 0;
}