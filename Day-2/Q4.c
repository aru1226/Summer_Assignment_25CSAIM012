//Write a program to Check whether a number is palindrome. 
#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if (num<0)
    {
        printf("Number Is Not Palindrome");
        return 0;
    }
    int temp=num;
    while(num>0)
    {
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
    }
    if (temp==rev)
    {
        printf("Number Is Palindrome");
    }
    else
    {
    printf("Number Is Not Palindrome");
    }
    return 0;
}