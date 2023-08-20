#include <stdio.h>
void printTriangle(int n)
{
    // print the alphabetical triangle
    for (int j = 65; j <= n + 64; j++)
    {
        for (int i = 65; i <= j; i++)
        {
            printf("%c", j);
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