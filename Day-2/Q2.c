//Write a program to Reverse a number. 
#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if (num<0)
    {
        num=-num;
    }
    while(num>0)
    {
    digit=num%10;
    rev=rev*10+digit;
    num=num/10;
    }
    printf("Reverse Of Number Is :\n");
    printf("%d",rev);

    return 0;
}