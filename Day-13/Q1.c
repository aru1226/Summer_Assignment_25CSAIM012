//Write a program to Input and display array.
#include <stdio.h>
int main()
{
    int a[100];
    int n;  
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nArray elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, a[i]);
    }
    return 0;
}