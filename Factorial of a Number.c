#include <stdio.h>
int main()
{
    int n, i;
    long long fact = 1;
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial not defined");
    else
    {
        for (i = 1; i <= n; i++)
            fact = fact * i;

        printf("Factorial = %lld", fact);
    }
    return 0;
}
