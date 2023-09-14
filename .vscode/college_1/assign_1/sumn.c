#include<stdio.h>

int main(void)
{
    int n, i = 1, sum = 0;
    printf("enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of n natural numbers: %d\n", sum);
}