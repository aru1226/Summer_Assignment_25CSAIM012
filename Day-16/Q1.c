//Write a program to Find missing number in array.
#include <stdio.h>
int main() 
{
    int n;
    
    printf("Enter size of array: \n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter numbers: ");
    
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    int total = (n + 1) * (n + 2) / 2;
    
    printf("Missing number is: %d\n", total - sum);
    
    return 0;
}