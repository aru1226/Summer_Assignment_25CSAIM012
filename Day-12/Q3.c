//Write a program to Write function for Fibonacci.
#include<stdio.h>
int fib(int n)
{
    int a,b,c,i;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n == 2)
        return 1;
    a=0;
    b=1;
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int term;
    printf("Enter the nth term you want to find: \n");
    scanf("%d",&term);
    int result = fib(term);
    printf("%d",result);
    return 0;
}