#include <stdio.h>
void printSquare(int n)
{
    // print the numerical square
    for (int j = 1; j <= n; j++)
    {
        int m = n - j + 1;
        for (int i = n; i >= m + 1; i--)
        {
            printf("%d", i);
            printf(" ");
        }
        for (int k = 0; k < 2 * m - 1; k++)
        {
            printf("%d", m);
            printf(" ");
        }
        for (int l = m + 1; l <= n; l++)
        {
            printf("%d", l);
            printf(" ");
        }
        printf("\n");
    }
    for (int j = n+1; j <= 2 * n - 1; j++)
    {
        int m = j - n + 1;
        for (int i = n; i >= m + 1; i--)
        {
            printf("%d", i);
            printf(" ");
        }
        for (int k = 0; k < 2 * m - 1; k++)
        {
            printf("%d", m);
            printf(" ");
        }
        for (int l = m + 1; l <= n; l++)
        {
            printf("%d", l);
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
    printSquare(s);
    return 0;
}