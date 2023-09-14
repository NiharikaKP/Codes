#include<stdio.h>

int main (void)
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c = a + b;
    printf("Sum of the given numbers: %d\n", c);

    c = a - b;
    printf("Subtraction of the given numbers: %d\n", c);

    c = a * b;
    printf("Product of the given numbers: %d\n", c);

    c = a / b;
    printf("Division of the given numbers: %d\n", c);

    c = a % b;
    printf("remainder: %d", c);
}