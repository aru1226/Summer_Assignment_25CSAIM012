//Write a program to Find GCD of two numbers.
#include<stdio.h>
int main()
{
    int num1,num2,r;
    printf("Enter First Number: \n");
    scanf("%d",&num1);
    printf("Enter Second Number: \n");
    scanf("%d",&num2);
    while(num2>0)
    {
        r=num1%num2;
        num1=num2;
        num2=r;
    }
    printf("The GCD Is: \n");
    printf("%d",num1);
    return 0;
}