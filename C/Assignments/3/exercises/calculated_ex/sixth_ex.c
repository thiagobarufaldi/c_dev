/*Kernighan and Ritchie) Write a function celsius() to convert degrees Fahrenheit to degrees Celsius. (The conversion formula is °C = 5/9 * (°F - 32).) 
Use it to print a Fahrenheit-to-Centigrade table for -40 to 220 degrees Fahrenheit, in increments of 10 degrees. 
(Remember that %f is the printf format to use for printing floating-point numbers. Also, remember that the integer expression 5/9 gives 0, so you won't want to use integer division.) */

#include <stdio.h>

double celsius(double);

int main()
{
    double f;

    for(f = -40; f <= 220; f += 10)
    {
        printf("%f\t%f\n", f, celsius(f));
    }
    
    return 0;
}

double celsius(double f)
{
    return 5. / 9. * (f - 32);
}