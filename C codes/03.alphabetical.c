#include<stdio.h>
#include<string.h>

void main(){
int i,j,n;
printf("enter no of names : ");
scanf("%d", &n);
char name[100][10];
char s[100];
for(i=0;i<n;i++){
printf("enter list of name %d : ", i+1);
scanf("%s", name[i]);
}
for(i=0;i<n;i++){
printf("name %d : %s \n", i+1, name[i]);
}

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(s,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],s);
            }

    }
}
printf("\n");
for(i=0;i<n;i++){
    printf("name %d : %s\n", i+1, name[i]);
}

}
