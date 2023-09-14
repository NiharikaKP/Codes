#include<stdio.h>

int main (void)
{
    int SI, P, T;
    float R;
    printf("Principal amount: ");
    scanf("%d", &P);
    printf("Rate per annum: ");
    scanf("%f", &R);
    printf("Time in years: ");
    scanf("%d", &T);

    SI = (P * R * T) / 100;
    printf("Simple interest: %d", SI);
}