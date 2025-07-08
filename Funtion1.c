#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("enter the first and sencond number : ");
    scanf("%d%d",&a,&b);
    c = a + b ;
    printf("the adddition of two numbers is :%d",c);
}