#include<stdio.h>

int main(void)
{
    int n;
    printf("Size: ");
    scanf("%d", &n);
    for (int j = 0; j < 2*n - 1; j++)
    {
        printf("*");
    }
    printf("\n");
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < j + 1; i++)
        {
            printf(" ");
        }
        printf("*");
        for (int k = 0; k < n - 2*j; k++)
        {
            printf(" ");
        }
        if (j != 3)
        {
            printf("*");
        }
        printf("\n");
    }
    
}