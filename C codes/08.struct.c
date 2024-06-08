#include <stdio.h>

typedef struct{
    char name[12];
    int age;
    int id;
}emp;

void main ()
{
    emp one = {"bro", 25, 1};
    emp two = {"bruh", 36, 2};

    printf("%s", one.name);
    printf("%s", two.name);
    printf("%d", one.id);
    printf("%d", two.id);
   
}