#include <stdio.h>
void printTriangle(int n) 
{
	// print the triangle
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-j; i++)
        {
            printf("* ");
        }
        printf("\n");
    }   
}
int main(void)
{
    //prompt the user for size
    int s;
    scanf("%d", &s);
    printTriangle(s);
    return 0;
}