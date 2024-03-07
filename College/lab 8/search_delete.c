#include <stdio.h>

void main(){
    int a[100],n,i,ele,j;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\nEnter the element you want to delete : ");
    scanf("%d", &ele);

    for (i=0; i<n; i++){
        if (a[i] == ele){
            for (j=i; j<n; j++){
                a[j]=a[j+1];
            }
        }
    }

      for(i=0; i<n-1; i++){
        printf("%d ", a[i]);
    }
}

