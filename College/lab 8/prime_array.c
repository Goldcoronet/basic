#include <stdio.h>

void main(){
    int a[100],n,i,j,check;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }

    for(i=0; i<n; i++){
        check = 0;
        for(j=2; j<a[i]; j++){
            if (a[i]%j==0){
                check = 1;
                break;
            }
        }
    if (check == 0&& a[i]!=1){
        printf("\n%d is prime", a[i]);
        }
    }
}
