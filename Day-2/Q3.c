//Write a program to Find product of digits.
#include<stdio.h>
int main()
{
    int num,digit,pro=1;
    printf("Enter Your Number:");
    scanf("%d",&num);
    if (num<0)
    {
        num=-num;
    }
    if (num==0)
    {
        pro=0;
    }
    while(num>0)
    {
    digit=num%10;
    pro=pro*digit;
    num=num/10;
    }
    printf("Product Of Number Is :\n");
    printf("%d",pro);

    return 0;
}