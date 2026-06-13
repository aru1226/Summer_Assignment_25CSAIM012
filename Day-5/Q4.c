//Write a program to Find largest prime factor
#include<stdio.h>
int main()
{
    int num, i, largest = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
     if(num < 0)
        num = -num;
    while(num % 2 == 0)
    {
        largest = 2;
        num = num / 2;
    }
     for(i = 3; i * i <= num; i = i + 2)
    {
        while(num % i == 0)
        {
            largest = i;
            num = num / i;
        }
    }
     if(num > 2)
        largest = num;
    
    printf("Largest prime factor is: %d\n", largest);
    
    return 0;
}