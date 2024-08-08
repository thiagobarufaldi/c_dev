#include <stdio.h>

extern int mygetline(char[], int);

int main()
{
    char line[256];
    int i = 50;
    int len;

    while(mygetline(line, 256) != EOF)
    {
        printf("You typed: \"%s\"\n", line);
    }

    return 0;
}