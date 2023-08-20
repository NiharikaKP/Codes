#include <stdio.h>
void printDiamond(int n) 
{
    // make the upper pyramid
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-j-1; i++)
        {
            printf(" ");
        }
        for (int k = 0; k < j+1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // make the lower pyramid
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            printf(" ");
        }
        for (int k = 0; k < n-j; k++)
        {
            printf("* ");
        }
        printf("\n");
    }  
}
int main(void)
{
    // prompt the user for size
    int s;
    scanf("%d", &s);
    printDiamond(s);
    return 0;
}