#include <stdio.h>

int main()
{

int i, f, number;

printf("choose a number:\n");
scanf("%d, number", &number);

printf("\n");
printf("table of factorials\n");
printf("   for %i\n", number);
printf("----------------\n");
    f = 1;
    for (i = 1; i <= number; i++)
    {
        f = f * i;
        printf("#%i   %5i \n", i, f);
    }
    
}
