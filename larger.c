#include <stdio.h>

void main()
{
    int a;
    int b;
    int c;

    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    printf("Enter third number :");
    scanf("%d", &c);

    if (a>b){
            if (a>c){
        printf("%d is largest",a);
        }
    }
    else{
            if(b>c){
        printf("%d is largest",b);
        }
        else{
            printf("%d is largest", c);
        }
    }

}
