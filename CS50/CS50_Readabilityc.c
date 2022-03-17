#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
// prototypes
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{

    int letters;
    int words;
    int sentences;

    string text = get_string("text: ");

    letters = count_letters(text);
    words = count_words(text);
    sentences = count_sentences(text);

    float L = (float)letters / words * 100;
    float S = (float)sentences / words * 100;
    // Coleman-Liau index
    float calc = 0.0588 * L - 0.296 * S - 15.8;
    int index = round(calc);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
    return 0;
}
// functions below
int count_letters(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
        if (isalpha(text[i]))
        {
            letters++;
        }
    return letters;
}

int count_words(string text)
{
    int words = 0;
    for (int i = 0; i < strlen(text); i++)
        if (text[i] == 32)
        {
            words++;
        }
    return words + 1;
}

int count_sentences(string text)
{
    int sentences = 0;
    for (int i = 0; i < strlen(text); i++)
        if ((text[i] == 33) || (text[i] == 46) || (text[i] == 63))
        {
            sentences++;
        }
    return sentences;
}