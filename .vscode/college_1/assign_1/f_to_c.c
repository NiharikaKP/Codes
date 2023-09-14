#include<stdio.h>

int main (void)
{
    float f, c;
    printf("Temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = ((f - 32.0)*(5.0/9.0));
    printf("Temperature in celsius: %.2f\n", c);
}