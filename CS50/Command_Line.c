#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    const struct entry dictionary[100] =
        {{"aardvark", "a burrowing African mammal"},
         {"abyss", "a bottomless pit"},
         {"acumen", "mentally sharp; keen"},
         {"addle", "to become confused"},
         {"aerie", "a high nest"},
         {"affix", "to append; attach"},
         {"agar", "a jelly made from seaweed"},
         {"ahoy", "a nautical call of greeting"},
         {"aigrette", "an ornamental cluster of feathers"},
         {"ajar", "partially opened"}};
    int entries = 10;
    int entryNumber;
    int lookup(const struct entry dictionary[], const char search[],
               const int entries);
    if (argc != 2)
    {
        fprintf(stderr, "No word typed on the command line.\n");
    }
    entryNumber = lookup(dictionary, argv[1], entries);
    if (entryNumber != -1)
        printf("%s\n", dictionary[entryNumber].definition);
    else
        printf("Sorry, %s is not in my dictionary.\n", argv[1]);
    return EXIT_SUCCESS;
}