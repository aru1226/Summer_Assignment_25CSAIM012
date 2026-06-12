//Write a program to Check Armstrong number.
#include <stdio.h>
#include <math.h>
int main() 
{
    int n,r,digit=0,power=0,m,original;
    printf("Enter The Number");
    scanf("%d",&n);
    m=n;
    original=n;
    while(n>0)
    {
        r=n%10;
        digit+=1;
        n=n/10;
    }
    while(m>0)
    {
        r=m%10;
        power+=pow(r,digit);
        m=m/10;
    }
    if(original==power)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong Number");
    }
    
    
    return 0;
}