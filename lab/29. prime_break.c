#include <stdio.h>

void main(){
    int i,j,n,check;
    printf("enter till where range should be : \n");
    scanf("%d", &n);
    printf("\n");

    for(i-2; i<=n; i++){
        check = 0;
        for(j=2; j<i; j++){
            if(i%j == 0){
                check = 1;
                break;
            }
        }
    if (check == 0){
        printf("%d\t", i);
    }        
    }
}