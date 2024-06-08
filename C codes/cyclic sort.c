#include <stdio.h>
void main(){
int a[100];
int i,n,correct;
printf("enter length of array : ");
    scanf("%d", &n);
    printf("enter array : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
i = 0;
while(i<n){
    correct = a[i]-1;
    if(a[i]!=a[correct]){
        swap(a, i, correct);
    }
    else{
        i++;
    }
}

showarr(n, a);
}

void swap (int a[], int first, int second){
    int temp;
    temp = a[first];
    a[first] = a[second];
    a[second] = temp;
}

void showarr(int length, int a[]){
    printf("array :");
    for(int i=0;i<length;i++){
        printf("%d ", a[i]);
    }
}
