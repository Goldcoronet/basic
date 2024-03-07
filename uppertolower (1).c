#include <stdio.h>

void main(){
    char c;
    printf("enter a character:\n");
    scanf("%c",&c);
    char a= c+32;
    printf("%c is %c",c,a);
}
