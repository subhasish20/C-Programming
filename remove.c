#include<stdio.h>
int main(int argc, char **argv)
 {
    int a[10],input,x;
    printf("Enter the total size of the element that you want to store : ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        printf("Enter the %d element ",i+1);
        scanf("%d",&a[i]);
    }
    printf("The entered elements are :");
    for (int i=0;i<x;i++)
    {
        printf("%d\n",a[i]);
    }

    return  0;
 }