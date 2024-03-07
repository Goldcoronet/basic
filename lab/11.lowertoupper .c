#include <stdio.h>

void main(){
    char c;
    printf("enter a character:\n");
    scanf("%c",&c);
    char a= c-32;
    printf("%c has been converted to %c",c,a);
}
