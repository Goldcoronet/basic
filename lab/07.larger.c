#include <stdio.h>

void main()
{
    int a;
    int b;

    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    if (a>b){
        printf("%d is larger than %d",a,b);
    }
    else{
        printf("%d is larger than %d",b,a);
    }
}
