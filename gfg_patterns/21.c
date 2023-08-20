#include <stdio.h>
void printSquare(int n)
{
    // make the square
    for (int j = 0; j < n; j++)
    {
        if ((j==0) || (j==n-1))
        {
            for(int i = 0; i < n; i++)
            {
                printf("*");
            }
            printf("\n");
        }
        else 
        {
            for (int i = 0; i < n; i++)
            {
                if ((i==0) || (i==n-1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    
}
int main(void)
{
    // prompt the user for size
    int s;
    scanf("%d", &s);
    printSquare(s);
    return 0;
}