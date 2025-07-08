#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    printf("%d\n", *p);
    printf("%d\n", &p);
    printf("%d\n", a);
    printf("%d\n", &a);

    return 0;
}