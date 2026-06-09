//Write a program to Print multiplication table of a given number.
#include <stdio.h>

int main()
{
    int n,Table;

    printf("Enter a number: ");
    scanf("%d", &n);
     if(n<1)
    {
        printf("Table Is Not Possible:");
    }
    else
    for (int i= 1;i<=10;i++)
    {
        Table = n*i;
        printf("%d x %d = %d\n", n, i, Table);
    }
    return 0;
}