#include<math.h>
#include<stdio.h>

int main (void)
{
    int A, CI, P, T;
    float R;
    printf("Principal amount: ");
    scanf("%d", &P);
    printf("Rate per annum: ");
    scanf("%f", &R);
    printf("Time in years: ");
    scanf("%d", &T);

    double b = (1 + (R / 100)), c = T;
    double d = pow(b, c);
    A = P * d;
    CI = A - P;
    printf("Compound interest: %d", CI);

}