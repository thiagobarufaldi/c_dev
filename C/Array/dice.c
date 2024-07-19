#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	int d1, d2;
	int a[13];	/* uses [2..12] */

	for(i = 2; i <= 12; i = i + 1)
		a[i] = 0;

	for(i = 0; i < 100; i = i + 1)
		{
		d1 = rand() % 6 + 1;
		d2 = rand() % 6 + 1;
		a[d1 + d2] = a[d1 + d2] + 1;
		}

	for(i = 2; i <= 12; i = i + 1)
		printf("%d: %d\n", i, a[i]);

	return 0;
}