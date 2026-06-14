//Write a program to Find x^n without pow().
#include <stdio.h>
int main() {
    int a,n,i,r=1;
    printf("Enter base");
    scanf("%d",&a);
    printf("Enter exponent");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        r*=a;
    }
    printf("%d",r);
    return 0;
}