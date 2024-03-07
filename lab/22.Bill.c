#include <stdio.h>
void main(){
    float units, bill;

    printf("Enter energy consumed :");
    scanf("%f", &units);

    bill = 500;

    if(units>20){
        if(units<30){
            bill = bill + bill*0.05;
        }
        else{
            if(units<40){
                bill = bill + bill * 0.1;
            }
            else{
                if(units<50){
                    bill = bill + bill * 0.2;
                }
                else{
                    bill = bill + bill * 0.25;
                }
            }
        }
    }

    printf("\nbill = %.2f\n", bill);
}
