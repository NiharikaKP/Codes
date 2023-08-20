#include <stdio.h>
void printTriangle(int n) 
{
    // make the upper part 
    for (int j = 0; j < n; j++)
    {
        // make the left part of upper body
        for (int i = 0; i < j+1; i++)
        {
            printf("*");
        }
        for (int k = 0; k < n-j-1; k++)
        {
            printf(" ");
        }
        // make the right part of upper body
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
    // make the lower part 
    for (int j = 0; j < n-1; j++)
    {
        // make the left part of lower body
        for (int i = 0; i < n-j-1; i++)
        {
            printf("*");
        }
        for (int k = 0; k < j+1; k++)
        {
            printf(" ");
        }
        // make the right part of lower body
        for (int l = 0; l < j+1; l++)
        {
            printf(" ");
        }
        for (int m = 0; m < n-j-1; m++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main(void)
{
    //prompt the user for size
    int s; 
    scanf("%d", &s);
    printTriangle(s);
    return 0;
}