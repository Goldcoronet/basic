#include <stdio.h>

void main(){
char c;
printf("enter a character :");
scanf("%c", &c);

if (c>='A'&&c<='Z'){
    printf("It's Uppercase");
}
else if (c>='a'&&c<='z'){
    printf("\nIt's Lowercase\n");
}
else if (c>='0'&&c<='9'){
    printf("\nIt's an Interger\n");
}
else{
    printf("\nIt is a special character\n");
}
}
