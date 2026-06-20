//Write a program to Write function for perfect number.
#include<stdio.h>
int perfect(int num)
{
    int sum=0;
    for(int i=1;i<num/2;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if (sum==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main ()
{
    int n;
    printf("Enter The NUmber: \n");
    scanf("%d",&n);
    if (perfect(n))
    {
        printf("Number Is Perfect. \n");
    }
    else
    {
        printf("Number Is Not Perfect. \n");
    }
    return 0;
}