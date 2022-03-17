#include <stdio.h>

int main()
{

    int height, row, column, space;

    printf("what height for the pyramid?:");
    scanf("%i", &height);

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}