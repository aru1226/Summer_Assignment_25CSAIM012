//Write a program to Frequency of an element.
#include<stdio.h>
int main()
{
    int a[5],i,n,f=0;
    printf("Enter The Elements: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The Element Whose Frequency To Be Found: \n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        { 
        f++;
        }
    }
    printf("The Frequency Of Element Is: %d \n",f);
    return 0;
}