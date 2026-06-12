//Write a program to Find nth Fibonacci term.
#include <stdio.h>
int main() 
{
    int a,b,c,n,i;
    printf("Enter The nth Term You Want To Find");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",c);
    return 0;
}