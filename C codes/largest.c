#include <stdio.h>
void main(){
int a[100],n,i,lar1,lar2;

printf("n =");
scanf("%d",&n);
printf("enter elements :");
for(i=0; i<n; i++){
scanf("%d", &a[i]);
}
lar1 = a[0];
lar2 = a[0];

for(i=0;i<n;i++){
    if(a[i]>lar1){
        lar2=lar1;
        lar1=a[i];
    }
    else if(a[i]>lar2){
        lar2=a[i];
    }
}

printf("%d ", lar1);
printf("%d", lar2);
}
