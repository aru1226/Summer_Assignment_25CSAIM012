//Write a program to Count words in a sentence.
#include <stdio.h>
int main()
{
    char str[200];
    int count = 0;
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    printf("Number of words: %d\n", count + 1);

    return 0;
}