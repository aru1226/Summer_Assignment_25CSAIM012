// Write a program to Count even and odd elements.
#include <stdio.h>
int main() 
{
    int arr[100];
    int n;
    int evenCount = 0, oddCount = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\nEven numbers: %d", evenCount);
    printf("\nOdd numbers: %d", oddCount);
    return 0;
}