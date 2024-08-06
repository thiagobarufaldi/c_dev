/*Write the function
	void printnchars(int ch, int n)
which is supposed to print the character ch, n times. (Remember that %c is the printf format to use for printing characters.) 
For example, the call printnchars('x', 5) would print 5 x's. Use this function to rewrite the triangle-printing program of assignment 1 (exercise 4). */

#include <stdio.h>

extern void printnchars(int, int);

int main()
{
    printnchars('c', 3);

    return 0;
}