//Write a program to Count digits in a number.
#include <stdio.h>

int main()
{
    int n,m=0;
    printf("Enter Your Number:");
    scanf("%d",&n);
    int t =n;
    if (n<0)
    {
        t=-t;
    }
    if (n==0)
    {
        m=1;
    }
    else
    {
    for(int i=t;i>0;i=i/10)
   {
    m++;
   }}
   printf("Number Of Digit: \n");
   printf("%d",m);
   return 0; 
}