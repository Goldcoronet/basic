#include <stdio.h>
void main(){
int a[100];
int i,n,correct;
printf("enter length of array : ");
    scanf("%d", &n);
    printf("enter array [0 to n] : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
i = 0;
while(i<n){
    correct = a[i];
    if(a[i]!=a[correct] && a[i]!=n){
        swap(a, i, correct);
    }
    else{
        i++;
    }
}

showarr(n, a);
missing(n, a);
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

int missing(int n, int a[]){
int i = 0;
while(i<=n){
    if(a[i]!=i){
        printf("\nmissing no. is %d", i);
        break;
    }
    else{
        i++;
    }
}
}
