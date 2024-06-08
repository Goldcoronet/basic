#include<stdio.h>
void main(){
int a[100],n,check=0;
int rem,rev=0,max=0;
printf("enter a number");
scanf("%d", &n);
while(n!=0){
        rem = n%10;
        if(rem<=max){
            break;
        }
        max = rem;
        n=n/10;
}
printf("%d\n", max);

while(n!=0){
        rev = max;
        rem = n%10;
        if(rem>rev||rem==max){
            check=1;
            break;
        }
        rev = rem;
        n=n/10;
}

if(check==1){
    printf("not hill");
}
else{
    printf("hill bitchessss");
}
}

