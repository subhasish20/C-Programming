//program to check a number is even or odd number
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even:
    {
        printf("even number\n");
    }
    odd:
    {
        printf("odd nuber\n");
    }
}