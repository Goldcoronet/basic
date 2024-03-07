#include <stdio.h>

void main(){
int a,b;
a = 10;
b = 5;

a = a+b;
b = a-b;
a = a-b;

printf("a = %d\n", a);
printf("b = %d\n", b);
}
