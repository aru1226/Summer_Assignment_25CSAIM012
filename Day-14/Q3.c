//Write a program to Second largest element.
#include<stdio.h>
int main()
{
    int a[100],i,n,j;
    printf("Enter The Number Of Elements: \n");
    scanf("%d",&n);
    printf("Enter The Elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("The Second Largest Element Is: %d \n",a[1]);
    return 0;
}