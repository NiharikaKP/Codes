#include <stdio.h>
void printTriangle(int n) 
{
    // print the numeric triangle
    for (int j = 1; j <= n; j++)
    {
        for (int i = 0; i < j; i++)
        {
            printf("%d", j);
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