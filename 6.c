#include <stdio.h>
void printTriangle(int n) 
{
    // print the numeric triangle
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n-j+1; i++)
        {
            printf("%d", i);
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