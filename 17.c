#include <stdio.h>
void printTriangle(int n)
{
    // print the alphabetical triangle
    // print the left part
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n - j; i++)
        {
            printf(" ");
        }
        for (int k = 65; k <= 64 + j; k++)
        {
            printf("%c", k);
        }
        for (int l = 63+j; l >= 65; l--)
        {
            printf("%c", l);
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