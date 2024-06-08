#include <stdio.h>
#include <math.h>
void main(){
    int check = 0,rev= 0,rem = 0;
    int a = 110100l;
    while(a!=0){
        rem=a%10;
        if(rem==rev && rem==1){
            check = 1;
            break;
        }
        rev = rem;
        a=a/10;
    }
    if(check==1){
        printf("not sparse");
    }
    else{
        printf("sparse");
    }
}
