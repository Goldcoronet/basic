#include<stdio.h>
void main(){
int a[3][4],b[5];
int i,j,sum,carry=0;
printf("enter code ");

for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        scanf("%d", &a[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<4;j++){
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("\n");
for(j=4-1;j>=0;j--){
    sum = 0;
    for(i=0;i<3;i++){
        sum = sum+a[i][j];
    }
    sum = sum+carry;
    b[j+1]= sum%10;
    carry = sum/10;
}
b[0]= carry;
for(j=0; j<5; j++){
    printf("%d ", b[j]);
}
}


