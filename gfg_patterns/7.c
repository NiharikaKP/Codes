#include <stdio.h>
void printTriangle(int n) 
{
    // make the pyramid
    for (int j = 0; j < n; j++)
    {
        // make the right aligned pyramid
        for (int i = 0; i < n-j-1; i++)
        {
            printf(" ");
        }
        for (int k = 0; k < j+1; k++)
        {
            printf("*");
        }
        // make the left part of pyramid
        for (int i = 0; i < j; i++)
        {
            printf("*");
        }
        printf("\n");
    }   
}
int main(void)
{
    // prompt the user for size
    int s;
    scanf("%d", &s);
    printTriangle(s);
    return 0;
}