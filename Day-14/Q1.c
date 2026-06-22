//Write a program to Linear search.
#include<stdio.h>
int main()
{
    int a[5],i,n,found=0;
    printf("Enter The Elements: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The Element To Be Searched: \n");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if(n==a[i])
        {
            printf("Element Found: %d \n",a[i+1]);  
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("Element Not Found. \n");
    }
    return 0;
}