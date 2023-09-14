#include<stdio.h>

int main(void)
{
    int a,b,c,d,e;
    float f;
    double g;
    char h;

    b = sizeof(a);
    printf("size of integer:%d\n", b);

    c = sizeof(f);
    printf("size of float:%d\n", c);

    d = sizeof(g);
    printf("size of double:%d\n", d);

    e = sizeof(h);
    printf("size of character:%d\n", e);

}