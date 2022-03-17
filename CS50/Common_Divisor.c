/* Program to find the greatest common divisor
of two nonnegative integer values */
#include <stdio.h>
int main (void)
{
int u, v, temp;
printf ("Please type in two nonnegative integers.\n");
scanf ("%i%i", &u, &v);

    while ( v != 0 ) 
    {
    temp = u % v; 
    u = v;
    v = temp;

    // this printf is to help me visualise the numbers chaning within the algorithim
    printf("temp = %i, u = %i and v = %i\n", temp, u, v);
    }
    
printf ("Their greatest common divisor is %i\n", u);
return 0;
}