#include <stdio.h>
void printTriangle(int n)
{
    // print the alphabetical triangle
    for (int j = 1; j <= n; j++)
    {
        for (int i = 64 + n; i >= 65 + n - j; i--)
        {
            printf("%c", i);
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