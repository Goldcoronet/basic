#include <stdio.h>
/*#include <string.h>

int main()
{
    char x [15] = "water";
    char y [15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("%s", x);


    return 0;
}*/

int main(){
    int x,y;
    printf("enter first number:");
    scanf("%d", &x);

    printf("enter second number:");
    scanf("%d", &y);

    x= x/y;
    y= (x*y)+((x*y)%y);
    x= y/x;
   // y= y+((x*y)%y);
   // x = x+y;
    //y= x-y;
    //x= x-y;

    printf("%d and %d", x, y);
}
