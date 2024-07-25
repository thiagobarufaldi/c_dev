/*Write a loop to call the multbytwo() function (chapter 5, section 5.1, p. 1) on the numbers 1-10. For extra credit, compile your main function and the multbytwo() function as two source files, one function per file. */

#include <stdio.h>

extern int multbytwo(int);

int main()
{
    int i;

    for(i = 0; i <= 10; i++)
    {
        printf("%d\n", multbytwo(i));
    }

    return 0;
}