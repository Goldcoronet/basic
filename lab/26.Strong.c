#include <stdio.h>

void main(){
int n,i,r,rev=0,f;
printf("enter a number\n");
scanf("%d", &n);
i = n;

while(n!=0){
    r=n%10;
    f= r;
    while(r>1){
        r = r-1;
        f = f*r;
    }
    rev = rev+f;
    n= n/10;
}
if (i == rev){
printf("%d is strong", rev);
}
else{
    printf("no strong");
}
}
