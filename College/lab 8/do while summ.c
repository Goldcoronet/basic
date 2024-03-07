#include <stdio.h>

void main(){
int n,sum=0;

do{
printf("enter a number you want to add:\n");
scanf("%d",&n);
printf("\n");
sum = sum+n;

}while(n!=0);

printf("sum = %d", sum);
}
