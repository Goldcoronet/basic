#include <stdio.h>
int main(){
    int a[100],i,j,n,min,pos,temp;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements in the array:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++){
        min=a[i];pos=i;
        for (j=i+1;j<n;j++){
            if(min>a[j]){
                pos=j;
                min=a[j];
            }
        }
        a[pos]=a[i];
        a[i]=min;
    }
    printf("Array after sorting:");
    for (i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
