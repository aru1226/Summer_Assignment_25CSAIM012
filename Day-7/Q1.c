//Write a program to Recursive factorial.
#include<stdio.h>
int fact(int n)
{
    if (n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
int n;
printf("Enter The Number:");
scanf("%d",&n);
if(n<0)
{
    printf("Factorial Is Not Defined For Negative Number.");
}
else
{
printf("The Factorial Is %d",fact(n));
}
return 0;
}