#include<stdio.h>

union address
{
    char dist[100];
};

struct student
{
    int roll;
    char name[100];
    int age;
    union address a;
};

int main()
{
    struct student s;
    printf("enter the name of the student :\n");
    gets(s.name);
    printf("enter the roll of the student :");
    scanf("%d", &s.roll);
    printf("enter the age of the student :");
    scanf("%d", &s.age);
    printf("enter the dist of the student :");
    scanf("%s", gets(s.a.dist));

    printf("the name of the student is :%s\n",s.name);
    printf("the roll of the student is :%d\n",s.roll);
    printf("the age of the student is :%d\n",s.age);
    printf("the dist of the student is :%s\n",s.a.dist);

    return 0;
}

