#include<stdio.h>

int main(void)
{
    int a,b,c,d,e;
    float f;
    double g;
    char h;
    printf("Enter an integer: ");
    scanf("%d", &a);
    b = sizeof(a);
    printf("size of integer:%d\n", b);

    printf("Enter a float: ");
    scanf("%f", &f);
    c = sizeof(f);
    printf("size of float:%d\n", c);

    printf("Enter a double: ");
    scanf("%lf", &g);
    d = sizeof(g);
    printf("size of double:%d\n", d);
    
    printf("Enter a character: ");
    scanf("%d", &h);
    e = sizeof(h);
    printf("size of character:%d\n", e);

}