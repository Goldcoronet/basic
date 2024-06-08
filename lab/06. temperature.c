#include <stdio.h>

void main()
{
    float temp;
    float far;

    printf("Enter temperature in degree celsius :");
    scanf("%f", &temp);

    far = (temp*(1.8))+32;
    printf("Temperature in fahrenheit is %.2f", far);
}
