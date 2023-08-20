#include <stdio.h>
void printTriangle(int n) 
{
    // print the triangle
    int sum = 0;
    for (int  j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            sum = sum + 1;
            printf("%d", sum);
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