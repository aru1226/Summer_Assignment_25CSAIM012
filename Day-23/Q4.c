//Write a program to Find maximum occurring character.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int count[256] = {0};
    int i, maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (count[(unsigned char)str[i]] > maxCount)
        {
            maxCount = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: '%c' (%d times)\n", maxChar, maxCount);

    return 0;
}