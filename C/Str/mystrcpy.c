#include <stdio.h>

int mystrcpy(char[], char[]);
int mystrcmp(char[], char[]);
int mystrlen(char[]);
int substr(char[], char[], int, int);

int main()
{
    char str[] = "Do ya thing! :)\n";
    char str1[40];
    char str2[] = "Do Ya damn Thing\n";

    substr(str1, str, 3, 9);
    printf("%s\n", str1);

    mystrcpy(str1, str);
    printf("%s", str1);

    if(mystrcmp(str, str2) == 0)
    {
        printf("Strings are equal!\n");
    }
    else
    {
        printf("Strings are not equal!\n");
    }

    if(mystrlen(str1) != 0)
    {
        printf("String length: %d\n", mystrlen(str1));
    }

    
    
    return 0;
}

int substr(char dest[], char src[], int offset, int len)
{
    int i;
    for(i = 0; i < len && src[offset + i] != '\0'; i++)
    {
        dest[i] = src[i + offset];
    }
    dest[i] = '\0';
}

int mystrlen(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
        ;

    return i;
}

int mystrcmp(char str1[], char str2[])
{
int i = 0;

while(1)
	{
	if(str1[i] != str2[i])
    {
        return str1[i] - str2[i];
    }
	if(str1[i] == '\0' || str2[i] == '\0')
	{
        return 0;
    }
	i++;
	}
}

int mystrcpy(char dest[], char src[])
{
int i = 0;

while(src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}

dest[i] = '\0';
}