#include <stdio.h>

void main(){
    int a[100],n,i,j,count;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    for (i=0; i<n; i++){
        count = 0;
        for (j=0; j<n; j++){
            if (a[i]>a[j]){
                count++;
            }
        }
        if (count == 0){
            printf("\n%d is smallest", a[i]);
        }
        if (count == n-1){
            printf("\n%d is largest", a[i]);
        }
    }
}
