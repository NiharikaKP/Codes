#include<stdio.h>

int main(void)
{
    float a, b, mult;
    printf("Enter the first number:");
    scanf("%f", &a);
    printf("Enter the second number:");
    scanf("%f", &b);
    mult = a * b;
    printf("Product of the given numbers: %f", mult);
}