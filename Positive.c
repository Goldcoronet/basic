#include <stdio.h>

void main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a>0){
        printf("%d is positive",a);
    }
    else if(a==0){
        printf("ZERO");
    }
    else{
        printf("%d is negative",a);
    }
}

