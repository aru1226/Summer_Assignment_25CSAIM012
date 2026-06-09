//Write a program to Find factorial of a number.
#include <stdio.h>

int main()
{
    int n,fact=1;
    printf("Enter a Number :");
    scanf("%d", &n);
    if(n<0)
    {
        printf("Factorial Is Not Possible For Negative Number:");
    }
    else
    {
    for (int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of Number Is: \n");
    printf("%d", fact);
}
    return 0;
}