//Write a program to Write function to find maximum.
#include<stdio.h>
int maximum(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int num1 , num2;
    printf("Enter The First Number: \n");
    scanf("%d",&num1);
    printf("Enter The Second Number: \n");
    scanf("%d",&num2);
    int result = maximum(num1,num2);
    printf("The Maximum Number Is: %d \n", result);
    return 0;
}