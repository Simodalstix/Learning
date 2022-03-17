// Function to calculate the nth triangular number

#include <stdio.h>
int calculateTriangularNumber(int number);

int main(void)
{
    int number;
    int triangularNumber;

    printf("What triangular number do you want? ");
    scanf("%i", &number);
    if (number < 0)
    {
        return 1;
    }

    triangularNumber = calculateTriangularNumber(number);

    {
        printf("Triangular number %i is %i\n", number, triangularNumber);
    }
    return 0;
}

int calculateTriangularNumber(int number)
{
    int i, triangularNumber = 0;
    for (i = 1; i <= number; ++i)
    {
        triangularNumber += i;
    }
    return triangularNumber;
}
