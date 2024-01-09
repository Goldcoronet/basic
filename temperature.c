#include <stdio.h>

int main()
{
    char unit;
    float temp;
    printf("Is the temperature in F or C? :");

    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        printf("Enter the temperature :");
        scanf("%f", &temp);

        float conversion = temp*(9/5)+32;

        printf("The the temp in F is : %.2f", conversion);
    }

    else if (unit == 'F'){
        printf("Enter the temperature :");
        scanf("%f", &temp);

        float conversion =(temp-32)*(5/9);

        printf("The the temp in C is : %.2f", conversion);
    }

    else {
        printf("enter valid unit");
    }

    return 0;
}
