//Write a program to Check strong number.
#include<stdio.h>
int main()
{
    int num,remainder,fact,sum=0;
    printf("Enter Your Number:");
    scanf("%d",&num );
    int temp=num;
    while(num > 0)
    {
     remainder=num%10;
     fact=1;
     for(int i=1;i<=remainder;i++)
     {
        fact=fact*i;
     }
     sum=sum+fact;
     num=num/10;
    }
    if (sum == temp)
    {
        printf("Entered Number Is Strong Number.");
    }
    else
    {
        printf("Entered Number Is Not Strong Number.");
    }
    return 0;
}