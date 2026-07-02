//Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int seen[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        if (seen[(unsigned char)str[i]] == 0)
        {
            seen[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String without duplicates: %s\n", str);

    return 0;
}