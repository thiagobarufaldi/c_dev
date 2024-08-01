#include <stdio.h>

extern int getliner(char[], int[]);

main()
{
char line[256];

while(getliner(line, 256) != EOF)
	printf("you typed \"%s\"\n", line);

return 0;
}