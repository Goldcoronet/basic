#include <stdio.h>

int main()
{
    int radius;
    printf("enter the radius of the circle\n");
    scanf("%d", &radius);

    const float PI = 3.14;
    float circum = 2*PI*radius;
    float area = PI* radius*radius;

    printf("The circumference oof the circle is %.2f", circum);
    printf("\nThe Area of the cirlce  is %.2f", area);

    return 0;
}


