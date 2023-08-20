#include <stdio.h>
void printTriangle(int n) 
{
    // print the alphabetic triangle
    for (int j = 1; j <= n; j++)
    {
        for (int i = 65; i <= 64+j; i++)
        {
            printf("%c", i);
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