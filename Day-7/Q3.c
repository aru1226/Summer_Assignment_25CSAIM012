//Write a program to Recursive sum of digits.
#include<stdio.h>
int sum (int n)
{
    if(n==0)
    return 0;
    else
    return n%10 + sum (n / 10);
}
int main ()
{
    int n;
    printf("Enter The Number:");
    scanf("%d",&n);
    if (n<0)
    n = -n;
    printf("%d",sum(n));
    return 0;
}