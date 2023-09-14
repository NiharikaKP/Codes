#include<stdio.h>

int main(void)
{
    int a, b, c;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greater\n");
        }
        else
        {
            printf("c is greater\n");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is greater\n");
        }
        else
        {
            printf("c is greater\n");
        }
    }
}