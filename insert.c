#include <stdio.h>

void main(){
    int a[100],n,i,ele,pos;
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    printf("\nEnter the element you want to insert : ");
    scanf("%d", &ele);
    printf("\nEnter the position of insertion : ");
    scanf("%d", &pos);

    for (i=n; i>=pos; i--){
        a[i]=a[i-1];
    }
    a[pos-1]= ele;

      for(i=0; i<=n; i++){
        printf("%d ", a[i]);
    }
}
