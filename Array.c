#include<stdio.h>
void main()
{
    int i;
    int a[5];
    for(i=0;i<5;i++)
    {
        printf("%d\n",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("enter :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",&a[i]);
    }
}