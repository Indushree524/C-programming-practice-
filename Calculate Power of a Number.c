#include <stdio.h>

int main()
{
    int base, exp, i;
    int result = 1;

    printf("Enter base and exponent: ");
    scanf("%d%d", &base, &exp);

    for(i = 1; i <= exp; i++)
    {
        result = result * base;
    }

    printf("Power = %d", result);

    return 0;
}
