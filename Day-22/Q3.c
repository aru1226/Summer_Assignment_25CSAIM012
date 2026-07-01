//Write a program to Character frequency.
#include <stdio.h>
int main()
{
    char str[200];
    char ch;
    int count = 0;
    int i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}