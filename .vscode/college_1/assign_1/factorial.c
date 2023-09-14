#include<stdio.h>

int main (void)
{
    int n, prod = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        prod = prod * i;
    }
    printf("Factorial of n: %d\n", prod);
}