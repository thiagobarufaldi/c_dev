#include <stdio.h>

extern int mygetline(char [], int);

int main()
{
	char word[20];
	int len;
	int i, j;

	printf("type something: ");
	len = mygetline(word, 20);

	for(i = 0; i < 80 - len; i++)
		{
		for(j = 0; j < i; j++)
			printf(" ");
		printf("\r%s", word);
		}
	printf("\n");

	return 0;
}