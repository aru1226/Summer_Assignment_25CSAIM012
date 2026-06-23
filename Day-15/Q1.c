//Write a program to Reverse array.
#include <stdio.h>
int main() 
{
    int a[100],i,n;
    printf("Enter The Number Of Element: \n");
    scanf("%d",&n);
    printf("Enter The Element Of Array: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}