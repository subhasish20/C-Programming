#include<stdio.h>

int main()
{
    int a[2];
    a[1]=5;
    printf(" the first value  is : %d\n",a[1]);
    printf(" the first value adress is : %d\n",&a[1]);
    a[1]=6;
    printf("the changed value is : %d\n",a[1]);

    printf("the changed adress is : %d\n",&a[1]);


    return 0;
}