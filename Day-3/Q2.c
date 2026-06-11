//Write a program to Print prime numbers in a range.
#include <stdio.h>

int main() {
    int check=1,i,j,start,end;
    printf("enter start");
    scanf("%d",&start);
    printf("enter end");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        if(i<2)
        continue;
    check=1;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            check=0;
            break;
        }
    }
    if(check==1)
    {
        printf("%d ",i);
    }
    }

    return 0;
}