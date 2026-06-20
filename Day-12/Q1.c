//Write a program to Write function for palindrome.
#include<stdio.h>
int palindrome (int a)
{
    int temp,sum=0,r;
    temp=a;
    while(a>0)
    {
    r=a%10;
    sum=sum*10+r;
    a=a/10;
    }
    if (temp==sum)
    return 1;
    else 
    return 0;
}
int main()
{
    int num;
    printf("Enter The Number: \n");
    scanf("%d",&num);
    if (palindrome(num))
    printf("Number Is Palindrome. \n");
    else
    printf("Number Is Not Palindrome. \n");
    return 0;
}