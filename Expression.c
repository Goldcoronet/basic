#include <stdio.h>

void main(){
    int a,b,c;
    float x,y,z;
    printf("enter the value of a: ");
    scanf("%d", &a);
    printf("enter the value of b: ");
    scanf("%d", &b);
    printf("enter the value of c: ");
    scanf("%d", &c);

    x = a-b/3+c*2-1;
    y = a-(b/3)+(c*2-1);
    z = a-((b/3)+c*(2-1));

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);
}
