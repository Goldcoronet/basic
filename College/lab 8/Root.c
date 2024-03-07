#include <stdio.h>
#include <math.h>
void main(){

float a,b,c,d,e,root,rt,real;
double imag;
printf("Enter a,b,c of quadratic eq.\n");
scanf("%f%f%f", &a, &b, &c);

e = b*b-4*a*c;
d = sqrt(b*b-4*a*c);
root = (-b+d)/(2*a);
rt = (-b-d)/(2*a);
printf("d is %f \n", d);

if(d>0){
    printf("Roots are real and distinct\n");
    printf("values:\n%f\n%f\n", root, rt);
}
else if(d==0){
    printf("Roots are real and equal\n\n");
    printf("\nvalues:\n%f\n%f\n", root, rt);
}
else{
    printf("Roots are imaginary\n");
    real=-b/(a*2);
    imag=sqrt(-e)/(a*2);
    printf("real part = %f\n", real);
    printf("imaginary part = %lf\n", imag);
}
}
