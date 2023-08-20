#include <stdio.h>
void printTriangle(int n) 
{
    // make the double numerical triangle
    for (int j = 1; j <= n; j++)
    {
        // print the left part
        for (int i = 1; i <= j; i++)
        {
            printf("%d", i);
            printf(" ");
        }
        for (int i = 1; i <= 2*(n-j); i++)
        {
            printf("  ");
        }
        // print the right part
        for (int k = 1; k <= j; k++)
        {
            printf("%d", j-k+1);
            printf(" ");
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