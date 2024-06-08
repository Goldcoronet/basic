#include<stdio.h>
void main(){
int a[100],n,i,j;
int rem;
printf("enter a number");
scanf("%d", &n);
for(i = 0; n!=0; i++){
    rem = n%2;
    if(rem>0){
        a[i]=1;
    }
    else{
        a[i]=0;
    }
    n=n/2;
}

for(j=i-1;j>=0; j--){
    printf("%d", a[j]);
}
}
