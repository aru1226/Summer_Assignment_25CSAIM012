//Write a program to Find longest word.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    char word[100], longest[100] = "";
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';
            if (strlen(word) > strlen(longest))
                strcpy(longest, word);
            j = 0;
        }
    }
    word[j] = '\0';
    if (strlen(word) > strlen(longest))
        strcpy(longest, word);

    printf("Longest word: %s\n", longest);

    return 0;
}