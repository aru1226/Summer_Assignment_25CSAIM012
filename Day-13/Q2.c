// Write a program to Find sum and average of array.
#include <stdio.h>
int main()
{
    int a[100];
    int n;
    int sum = 0;
    float average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter element arr[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    average = (float)sum / n;
    printf("\nArray elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nSum = %d", sum);
    printf("\nAverage = %.2f", average);
    return 0;
}