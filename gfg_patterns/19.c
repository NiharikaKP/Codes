#include <stdio.h>
void printTriangle(int n)
{
    // make the upper part
    for (int j = 0; j < n; j++)
    {
        // make the left part of upper tri
        for (int i = 0; i < n-j; i++)
        {
            printf("*");
        }
        for (int k = 0; k < j; k++)
        {
            printf(" ");
        }
        // make the right part of upper tri
        for (int l = 0; l < j; l++)
        {
            printf(" ");
        }
        for (int m = 0; m < n-j; m++)
        {
            printf("*");
        }
        printf("\n");
    }
    // make the lower part
    for (int j = 0; j < n; j++)
    {
        // make the left part of lower tri
        for (int i = 0; i < j+1; i++)
        {
            printf("*");
        }
        for (int k = 0; k < n-j-1; k++)
        {
            printf(" ");
        }
        // make the right part of upper tri
        for (int l = 0; l < n-j-1; l++)
        {
            printf(" ");
        }
        for (int m = 0; m < j+1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(void)
{
    int s;
    scanf("%d", &s);
    printTriangle(s);
    return 0;
}