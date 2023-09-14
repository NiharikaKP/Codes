#include <math.h>
#include<stdio.h>

int main (void)
{
    float l, w, area, perimeter;
    printf("length of the triangle: ");
    scanf("%f", &l);
    printf("width of the triangle: ");
    scanf("%f", &w);
    
    area = l * w;
    printf("Area of the rectangle: %.2f\n", area);
    perimeter = 2 * (l + w);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
}