#include <stdio.h>
int main(void)
{
    //prompt the user for size
    int s;
    scanf("%d", &s);

    //make the grid
    for(int j = 0; j < s; j++)
    {
        for(int i = 0; i < s; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}