#include <stdio.h>

void main(){
int n,i,rev = 0,rem;
printf("enter a number\n");
scanf("%d", &n);
i = n;

while(n!=0){
    rem = n%10;
    rev = rev+rem*rem*rem;
    n=n/10;
}
if (i == rev){
    printf("armstrong");
}
else{
    printf("no armstrong");
}
}
