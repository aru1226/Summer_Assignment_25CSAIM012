#include<stdio.h>
int main()
{
    int num,digit,rev=0;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if (num<0)
    {
        printf("Number Is Not Pallindrome");
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
        printf("Number Is Pallindrome");
    }
    else
    {
    printf("Number Is Not Pallindrome");
    }
    return 0;
}