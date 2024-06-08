#include <stdio.h>

void main(){
int a[100]={1,2,3,4,5};
int ele,i,j;
ele = 4;
for(i=0; i<5; i++){
    if(a[i]==ele){
        for(j=i; j<5; j++){
            a[j]=a[j+1];
        }
    }
}

for (i=0; i<5-1; i++)
    printf("%d ", a[i]);
}
