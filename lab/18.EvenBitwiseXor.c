#include <stdio.h>

void main(){
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if((a^1)==(a-1)){
        printf("%d is odd",a);
    }
    else{
        printf("%d is even",a);
    }
}
