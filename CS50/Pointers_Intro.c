// // Program to illustrate pointers
// #include <stdio.h>
// int main(void)
// {
//     // Pointers 11.1
//     int count = 10, x;
//     int *int_pointer;
//     int_pointer = &count;
//     x = *int_pointer;
//     printf("count = %i, x = %i\n", count, x);
//     // Pointers 11.2
//     char c = 'Q';
//     char *char_pointer = &c;
//     printf("%c %c\n", c, *char_pointer);
//     c = '/';
//     printf("%c %c\n", c, *char_pointer);
//     *char_pointer = '(';
//     printf("%c %c\n", c, *char_pointer);
//     // Pointers 11.3
//     int i1, i2;
//     int *p1, *p2;
//     i1 = 5;
//     p1 = &i1;
//     i2 = *p1 / 2 + 10;
//     p2 = p1;
//     printf("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i\n", i1, i2, *p1, *p2);
//     printf("%i, %i, %i", p1, *p1, &i2);
// More on pointers and functions
#include <stdio.h>
void exchange(int *const pint1, int *const pint2)
{
    int temp;
    temp = *pint1;
    *pint1 = *pint2;
    *pint2 = temp;
}
int main(void)
{
    void exchange(int *const pint1, int *const pint2);
    int i1 = -5, i2 = 66, *p1 = &i1, *p2 = &i2;
    printf("i1 = %i, i2 = %i\n", i1, i2);
    exchange(p1, p2);
    printf("i1 = %i, i2 = %i\n", i1, i2);
    exchange(&i1, &i2);
    printf("i1 = %i, i2 = %i\n", i1, i2);
    return 0;
}