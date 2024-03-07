#include <stdio.h>

void main(){
int a,b,c,x;
printf("enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);

x= (a<b && a<c)? a:((b<c && b<a)? b:c);

printf("%d is smallest", x);
}
