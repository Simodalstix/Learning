// Function to count the number of characters in a string
#include <stdio.h>
int stringLength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
        ++count;
    return count;
}
int main(void)
{
    int stringLength(const char string[]);
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char word2[] = {'a', 't', '\0'};
    // const char word3[] = {'a', 'w', 'e', '\0'};
    const char word4[] = {"\033\"Hello\"\n"};
    //I edited in word4 to test its length
    printf("%i %i %i\n", stringLength(word1),
           stringLength(word2), stringLength(word4));
    return 0;
}