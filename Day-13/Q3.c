//Write a program to Find largest and smallest element.
#include <stdio.h>
int main()
{
    int a[100];
    int n;
    int largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    largest = a[0];
    smallest = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest) {
            largest = a[i];
        }
        if (a[i] < smallest) {
            smallest = a[i];
        }
    }
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nLargest element = %d", largest);
    printf("\nSmallest element = %d", smallest);
    return 0;
}