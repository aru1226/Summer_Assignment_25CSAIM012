//Write a program to Convert decimal to binary.
#include<stdio.h>
int main()
{
    int num,binary=0,a=1;
    printf("Enter The Binary Number:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("The Binary is 0: \n");
        return 0;
    }
    while (num > 0)
    {
        binary=binary+(num%2)*a;
        num=num/2;
        a=a*10;
    }
    printf("The Binary is: %d",binary);
    return 0;
}