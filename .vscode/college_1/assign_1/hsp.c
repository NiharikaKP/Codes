#include<stdio.h>

int main(void)
{
    int n;
    printf("Size: ");
    scanf("%d", &n);
    for (int  j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j -1; i++)
        {
            printf(" ");
        }
        printf("*");
        for (int k = 0; k < 2*j - 1; k++)
        {
            printf(" ");
        }
        if (j != 0)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int  j = 0; j < 2*n - 1; j++)
    {
        printf("*");
    }
    printf("\n");
}