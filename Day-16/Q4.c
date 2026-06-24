//Write a program to Remove duplicates from array.
#include <stdio.h>
int main()
{
    int a[100], n, i, j, k;
    printf("Enter Number Of Elements: \n");
    scanf("%d",&n);
    printf("Enter Elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}