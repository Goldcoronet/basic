#include <stdio.h>
void main(){
    int a[100];
    int target;
    int n,i,j;

    printf("enter array length of array : ");
    scanf("%d", &n);
    printf("enter array : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("enter target : ");
    scanf("%d", &target);

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if ((a[i]+a[j])== target && i!=j){
                printf("[%d, %d]", i,j);
            }
        }
    }
}
