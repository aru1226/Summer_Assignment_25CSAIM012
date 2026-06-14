//Write a program to Convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main()
{
    int num,p=0,d=0,r;
    printf("Enter The Binary Number:");
    scanf("%d",&num);
    while (num > 0)
    {
        r=num % 10;
        d=d + r * pow(2,p);
        num=num / 10;
        p++;
    }
    printf("The Decimal Number Is %d",d);
    return 0;
}