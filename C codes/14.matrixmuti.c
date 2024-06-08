    #include <stdio.h>

    void main(){
    int i,m,j,q,k,n,p;
    int a[10][10],b[10][10],c[10][10];

    printf("enter the row and column of a :");
    scanf("%d%d", &m,&n);
    printf("enter row and column of b : ");
    scanf("%d%d", &p,&q);

    if(p!=n)
        printf("multiplicstion not possible");
    else{
            printf("enter for a : ");
        for(i=0; i<m; i++){
            for(j=0;j<n; j++){
                scanf("%d", &a[i][j]);
        }}
    printf("enter for b : ");
     for(i=0; i<p; i++){
            for(j=0;j<q; j++){
                scanf("%d", &b[i][j]);
        }}
    for(i=0; i<m; i++) {
        for(j=0;j<q; j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0; i<m; i++){
        for(j=0;j<q; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    }
    }
