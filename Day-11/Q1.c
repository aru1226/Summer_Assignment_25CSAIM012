//Write a program to Write function to find sum of two numbers.
#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int num1 ,num2 ;
    printf("Enter Both Number: \n");
    scanf("%d %d",&num1,&num2);
    int result = sum(num1,num2);
    printf("Sum Of Number Is: %d \n",result);
    return 0;
}