//Write a program to Find maximum frequency element
#include <stdio.h>
int main() 
{
    int n,i,c,j,t,m=0, a[100];
    printf("Enter Number Of Elemnts: \n") ;
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
    if(c>m)
    {
        m=c;
        t=a[i];
    }
    }
    printf("element %d with max frequency%d \n",t,m);
    return 0;
}