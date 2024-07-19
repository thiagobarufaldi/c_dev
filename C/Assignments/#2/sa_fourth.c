#include <stdio.h>

int main()
{
    int x = -1;
    int y = 0;

    if(x > 0)
		{
		if(y > 0)
			printf("Northeast.\n");
		else if (y < 0)
		{
			printf("Southeast.\n");
		}
		else	printf("East.\n");
		}
	if(x < 0)
    {
		if(y > 0)
            printf("Northwest.\n");
		else if (y < 0)
		{
			printf("Southwest.\n");
		}
		else	printf("West.\n");
		}
    if(y > 0)
	{
		if(x == 0)
		{
			printf("North.\n");
		}
		else printf("South.\n");
    }
	
	return 0;
}