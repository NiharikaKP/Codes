#include <stdio.h>
void printTriangle(int n) 
{
    // make the pyramid
    for (int j = 0; j < n; j++)
    {
        //make the right side of pyramid
        for (int i = 0; i < j; i++)
        {
            printf(" ");
        }
        for (int k = 0; k < n-j; k++)
        {
            printf("*");
        }    
        //make the left side of pyramid
        for (int i = 0; i < n-j-1; i++)
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