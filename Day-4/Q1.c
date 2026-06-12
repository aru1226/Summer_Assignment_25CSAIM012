//Write a program to Generate Fibonacci series
#include <stdio.h>
int main() 
{
    int a,b,c,n,i;
    printf("Enter The Number Of Terms Of Which You Want To Find The Series: ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d",a,b);  
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}