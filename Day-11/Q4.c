//Write a program to Write function to find factorial.
#include<stdio.h>
int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int Num;
    printf("Enter The Number: \n");
    scanf("%d",&Num);
    int result= fact(Num);
    printf("The Factorial Is :%d \n",result);
    return 0;
}