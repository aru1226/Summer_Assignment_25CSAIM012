//Write a program to Calculate sum of first N natural numbers.
#include <stdio.h>

int main()
 {
    int n,sum=0;
    printf("Enter a Natural Number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf ("The Sum Of First Natural number Is:\n");
    printf ("%d",sum);
    return 0;
}