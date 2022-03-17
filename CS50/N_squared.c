#include <stdio.h>

int main()
{

int n, n_square;
printf("\n");
printf("n   n-square \n");
printf("-------------\n");

for (n = 1; n < 11; n++){
    n_square = n * n;
    printf("%2i    %2i\n", n, n_square);
    }
}