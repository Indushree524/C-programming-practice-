#include <stdio.h>

int main()
{
    float radius, area;
    const float PI = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of Circle = %.2f", area);

    return 0;
}
