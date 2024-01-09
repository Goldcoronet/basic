#include <stdio.h>

int main()
{
    int rows;
    int columns;
    char symbol;

    printf("Enter the symbol :");
    scanf("%c", &symbol);

    printf("Enter no. of rows :");
    scanf("%d", &rows);

    printf("Enter no. of columns :");
    scanf("%d", &columns);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
    

    return 0;
}
