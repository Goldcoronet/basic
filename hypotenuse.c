#include <stdio.h>
#include <math.h>

int main()
{
    int p;
    int b;

    printf("Enter p : ");
    scanf("%d", &p);

    printf("Enter b : ");
    scanf("%d", &b);
    
    int c = pow(p,2)+pow(b,2);
    int h = sqrt(c);

    printf("the h is %d", h);

    return 0;
}
