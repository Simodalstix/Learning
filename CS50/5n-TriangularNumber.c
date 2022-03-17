#include <stdio.h>

int main()
{

int n, triangularNumber;

printf("\n");
printf("table of triangular Numbers\n");
printf("     every 5th number\n");
printf(" n      Triangular Number\n");

    // triangularNumber = 0;
    for (n = 5; n <= 50; n+= 5){
    triangularNumber = n * (n + 1) / 2;
    
    printf("%2i    %3i\n", n, triangularNumber);
    }
}