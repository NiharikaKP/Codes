#include<stdio.h>

int main(void)
{
    int a;
    printf("what is a? ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("a is even\n");
    }
    else
    {
        printf("a is odd\n");
    }
    
}