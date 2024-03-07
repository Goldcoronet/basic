#include <stdio.h>

void main(){
int i,j,n,k;
printf("enter the no of tables and till which term:\n");
scanf("%d%d",&n,&k);
printf("\n");

for(i=1; i<=n; i++){
    for(j=1; j<=k; j++){
        printf("%d * %d = %d\t",j,i,i*j);
    }
    printf("\n");
}
}
