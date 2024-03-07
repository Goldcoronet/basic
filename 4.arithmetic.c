#include <stdio.h>

void main()
{
    int a,b,op;

    printf("Enter first number :");
    scanf("%d", &a);

    printf("Enter second number :");
    scanf("%d", &b);

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Modulus\n");
    printf("\nEnter Operation no. :");
    scanf("%d", &op);

    if (op == 1){
        printf("Sum = %d", a+b);
    }
    else if (op == 2){
        printf("Subtraction = %d", a-b);}
    else if (op == 3){
        printf("Product = %d", a*b);
    }
    else if (op == 4){
        printf("Division = %d", a/b);
    }
    else if (op == 5){
        printf("Mod = %d", a%b);
    }
    else{
        printf("\nInvalid input");
    }
}
