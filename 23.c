//Write a C program prints the sum of elements of an array.
#include <stdio.h>
int main()
{
    int a[5],i,sum=0;
    for (i=1;i<=5;i++)
    {
        printf("Enter five values :\n");
        scanf("%d",&a[i]);
    }
    for (i=1;i<=5;i++)
    {
        sum = sum + a[i];
    }
    printf("sum = %d",sum);
    return 0;
}

