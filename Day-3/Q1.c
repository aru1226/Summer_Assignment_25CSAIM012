//Write a program to Check whether a number is prime.
#include<stdio.h>
int main()
{
    int num,i,check;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if(num<=1)
    {
        printf("Number Is Not Prime:");
        return 0;
    }
    for(i=2;i<num;i++)
    {
        check=num%i;
    if(check==0)
    {
        printf("Number Is Not Prime:");
        return 0;
    }
    }
        printf("Number Is Prime:");
    return 0;
}