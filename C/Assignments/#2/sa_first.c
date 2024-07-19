#include <stdio.h>

int main()
{
    int i;
    int j;

    for(i = 0; i <= 10; i++){
        if(i > 3){
            j = j + 1;
        }
    }
    printf("%d", j);

    return 0;
}