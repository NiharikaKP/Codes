#include <stdio.h>
void printSquare(int n)
{
    //print the grid
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("* ");
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