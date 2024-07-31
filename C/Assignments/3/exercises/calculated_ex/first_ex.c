/*Code: Write code to sum the elements of an array of int. (Write it as a function, if you like.) Use it to sum the array
        int a[] = {1, 2, 3, 4, 5, 6};*/

#include <stdio.h>

int a[] = {1, 2, 3, 4, 5, 6};

extern int sumnum(int [], int);

int main()
{
    printf("%d\n", sumnum(a, 6));
	return 0;
}

