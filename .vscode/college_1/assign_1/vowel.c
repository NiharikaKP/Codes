#include<stdio.h>

int main (void)
{
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if ((a == 97) || (a == 101) || (a == 105) || (a == 111) || (a == 117) || (a == 65) || (a == 69) || (a == 73) || (a == 79) || (a == 85))
    {
        printf("Character is vowel\n");
    }
    else if ((65 < a && a <= 90) || (97 < a && a <= 122))
    {
        printf("Character is consonant\n");
    }
    else
    {
        printf("Character is invalid\n");
    }
    
}