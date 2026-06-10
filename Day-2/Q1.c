//Write a program to Find sum of digits of a number.
#include<stdio.h>
int main()
{
    int num,digit,sum=0;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if (num<0)
    {
        num=-num;
    }
    while(num>0)
    {
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("Sum Of Number Is :\n");
    printf("%d",sum);

    return 0;
}