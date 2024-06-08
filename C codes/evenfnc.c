#include <stdio.h>
void even(int n){
    int x = n;
    if(x ==1)
        printf("1");
    else{
        if(x%2==0){
            printf("%d ", x);
            even(x-1);
            }
        else
            even(x-1);
    }
}

int recursion(){
}

void main(){
    //even(30);
    int _age;
    _age = 3;
    printf("%d", _age);
}

