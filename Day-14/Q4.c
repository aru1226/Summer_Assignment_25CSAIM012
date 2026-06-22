//Write a program to Find duplicates in array.
#include<stdio.h>
int main()
{
    int a[100],i,j,n,found=0;
    printf("Enter The Number Of Element: \n");
    scanf("%d",&n);
    printf("Enter The Elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("Duplicate Element Is: %d\n", a[i]);
                found = 1;
                break;  
            }
        }
    }
    if(!found)
    {    
      printf("Duplicate Element Is Not Found. \n");
    }
    return 0;
}