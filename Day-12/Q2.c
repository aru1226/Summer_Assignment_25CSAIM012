//Write a program to Write function for Armstrong.
#include<stdio.h>
#include<math.h>
int armstrong(int a)
{
    int b,r,digit=0,power=0,original;
    b=a;
    original=a;
     while(a>0)
    {
        r=a%10;
        digit+=1;
        a=a/10;
    }
    while(b>0)
    {
        r=b%10;
        power+=pow(r,digit);
        b=b/10;
    }
    if(original==power)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter The Number: \n");
    scanf("%d",&num);
    if(armstrong(num))
    {
        printf("Number Is Armstrong Number. \n");
    }
    else
    {
        printf("Number Is Not Armstrong Number. \n");
    }
    return 0;
}