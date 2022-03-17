// Program to generate a table of prime numbers
#include <stdio.h>
#include <stdbool.h>


int main (void)
{
int p, d;
_Bool isPrime;
// Can also use bool for true/false if include stdbool.h

    for ( p = 2; p <= 50; ++p ) {
    isPrime = 1;
        for ( d = 2; d < p; ++d )
        if ( p % d == 0 )
        isPrime = 0;
        // changed isPrime !=0 to just isPrime
    if ( isPrime )
    printf ("(%2i) \n", p);
    }
printf ("\n");
return 0;
}