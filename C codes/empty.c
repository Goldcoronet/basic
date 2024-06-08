#include <stdio.h>

void main(){
int rem,i,sum=0;
int n;
printf("enter nomber ");
scanf("%d", &n);

while(n!=0){
    rem = n%10;
    sum = sum + rem;
    n = n/10;
}
printf("%d", sum);
}
