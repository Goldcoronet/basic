#include <stdio.h>

void main(){
char a;
printf("Enter a character :");
scanf("%c", &a);
switch(a){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("%c is a vowel", a);
break;
default:
        printf("%c is consonant", a);
}
}

