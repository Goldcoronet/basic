#include <stdio.h>
#include <string.h>

int main(){

char topping[25];
int pizza;
printf("what kind of topping you want?\n");
//scanf("%s", &topping);
fgets(topping, 25, stdin);
topping[strlen(topping) - 1] = '\0';

printf("mhm %s is a classic\n", topping);

printf("how many pizzas you like?\n");
scanf("%d", &pizza);
printf("you like %d pizzas?? bro wot??\n", pizza);
}