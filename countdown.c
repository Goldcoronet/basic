#include <stdio.h>

void main(){
int i,j,n,skip;
printf("enter the start of countdown:\n");
scanf("%d",&n);
printf("\n");
printf("enter a number you want to skip:\n");
scanf("%d",&skip);
printf("\n");

for(i=n; i>=1; i--){
        if (i == skip){
            continue;
        }
        printf("%d\t", i);
}
}
